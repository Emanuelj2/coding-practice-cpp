#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;


class LRUCache{
    public:
    LRUCache(int capacity){
        this->capacity = capacity;
    }

    int get(int key){
        //if we dont find the key return -1
        if(map.find(key) == map.end()){
            return -1;
        }

        //move the key to the front of the cache
        cache.splice(cache.begin(), cache, map[key]);
        return map[key]->second; //return the value
    }

    void put(int key, int val){
        //if we find the key in the map
        if(map.find(key) != map.end()){
            cache.splice(cache.begin(), cache, map[key]);
            map[key]->second = val;
            return;
        }

        //if the capacity is full
        if(capacity == cache.size()){
            int leastUsed = cache.back().first;
            cache.pop_back();
            map.erase(leastUsed);
        }

        //insert to the front
        cache.push_front({key, val});
        map[key] = cache.begin();
    }

    private:
        int capacity;
        list<pair<int, int>> cache;
        unordered_map<int, list<pair<int, int>>::iterator> map;
};


int main() {
    LRUCache cache(2);  // Create a cache with capacity 2

    cache.put(1, 10); // Cache: {1=10}
    cache.put(2, 20); // Cache: {1=10, 2=20}

    cout << cache.get(1) << endl; // Should return 10 (Cache: {2=20, 1=10})

    cache.put(3, 30); // Evicts key 2, Cache: {1=10, 3=30}
    cout << cache.get(2) << endl; // Should return -1 (Key 2 is evicted)

    cache.put(4, 40); // Evicts key 1, Cache: {3=30, 4=40}
    cout << cache.get(1) << endl; // Should return -1 (Key 1 is evicted)
    cout << cache.get(3) << endl; // Should return 30 (Cache: {4=40, 3=30})
    cout << cache.get(4) << endl; // Should return 40 (Cache: {4=40, 3=30})

    return 0;
}
