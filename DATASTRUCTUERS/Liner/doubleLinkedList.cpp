#include <iostream>
using namespace std;

//make the node
//note that the node for a double linked list contains the value, the next and previous pointer.

template <typename T>
struct Node{
    T value;
    Node *prev;
    Node *next;

    //make the constructor
    Node(const T& value): data(value), prev(nullptr), next(nullptr){}

};


template <typename T >
class DoubleLinkedList{

    private:
    Node<T> *head;
    Node<T> *tail;

    public:

    //make the constructor
    DoubleLinkedList(){
        head(nullptr);
        tail(nullptr);
    }

    //destructor




    Node<T> *search(const T &val){ //this is a helper function 

    }

    void pushFront(const T &val){

    }

    void pushBack(const T &val){

    }

    void insertAfter(const T &SearchVal, const T &val){

    }

    void insertBefore(const T&SearchVal, const T &val){

    }

    void delete(const T&val){

    }

    void print(){

    }
};

int main(){
    return 0;
}