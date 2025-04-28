#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;


//in this approach i am going to use a DLL for O(1) deletion/insertion 
//and a hashmap for O(1) look up time

class MRUCache
{
private:
    int capacity;

    //in this approach i am going to use a DLL for O(1) deletion/insertion 
    //and a hashmap for O(1) look up time
    list<pair<int, int>> cache; //this id the DLL
    unordered_map<int, list<pair<int, int>>::iterator> map; //this is the hash map
public:

    //initialize the capacity
    MRUCache(int capacity){
        this->capacity = capacity;
    }

    int getKey(int key){
        //return the val if th key exist otherwise -1
        if(map.find(key) == map.end()){
            return -1;
        }

        cache.splice(cache.begin(), cache, map[key]);
        return map[key]->second;

    }

    void put(int key, int val){

        
        //if the key is in the map
        if(map.find(key) != map.end()){
            map[key]->second = val;
            cache.splice(cache.begin(), cache, map[key]);
            return;
        }

        if(capacity == cache.size()){

            int mostRecentlyUsed = cache.front().first;
            cache.pop_front();
            map.erase(mostRecentlyUsed);
        }
        cache.push_front({key, val});
        map[key] = cache.begin();
    }

};

#include <iostream>
using namespace std;

// your MRUCache code would be above here

int main() {
    MRUCache mru(2); // create MRUCache with capacity 2

    mru.put(1, 10); // cache: {1=10}
    mru.put(2, 20); // cache: {2=20, 1=10} (2 most recently used)

    cout << mru.getKey(1) << endl; // output: 10
    // cache after get(1): {1=10, 2=20}

    mru.put(3, 30); // should evict 1 (most recently used) → cache: {3=30, 2=20}

    cout << mru.getKey(2) << endl; // output: 20
    // cache after get(2): {2=20, 3=30}

    cout << mru.getKey(1) << endl; // output: -1 (because key 1 was evicted)

    mru.put(4, 40); // evict 2 (most recently used) → cache: {4=40, 3=30}

    cout << mru.getKey(3) << endl; // output: 30
    cout << mru.getKey(4) << endl; // output: 40

    cout << "----------------------" << endl;
    MRUCache mru2(3); // Create MRUCache with capacity 3

    mru2.put(5, 50); // cache: {5=50}
    mru2.put(10, 100); // cache: {10=100, 5=50}
    mru2.put(15, 150); // cache: {15=150, 10=100, 5=50}

    cout << mru2.getKey(10) << endl; // output: 100
    // cache after get(10): {10=100, 15=150, 5=50}

    mru2.put(20, 200); // Should evict 10 (most recently used)
    // cache: {20=200, 15=150, 5=50}

    cout << mru2.getKey(5) << endl; // output: 50
    // cache after get(5): {5=50, 20=200, 15=150}

    mru2.put(25, 250); // Should evict 5 (most recently used)
    // cache: {25=250, 20=200, 15=150}

    cout << mru2.getKey(15) << endl; // output: 150
    cout << mru2.getKey(5) << endl; // output: -1 (5 was evicted)

    return 0;
}
