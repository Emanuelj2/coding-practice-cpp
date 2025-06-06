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

    //destructor to free the list
    ~DoubleLinkedList(){
        while(head != nullptr){
            Node<T> *temp = head;
            head = head->next;
            delete temp;
        }
    }

    Node<T> *search(const T &val){ //this is a helper function 
        Node<T> * curr = head;

        while(curr != nullptr){

            if(curr == val){
                return curr;
            }
            curr = curr->next;
        }
        return nullptr; //this meand that the node with the specified value dose not exist/fount
    }

    void pushFront(const T &val){
        //make the new node
        Node<T> newNode = new Node<T>(val);

        newNode->next = head;

        if(head != nullptr){
            head->prev = newNode;
        }
        else {
            tail = newNode;
        }
        head = newNode;
    }

    void pushBack(const T &val){

        //make the node with the specified val
        Node<T>* newNode = new Node<T>(val);

        newNode->next = tail;
        if(tail != nullptr){
            tail->next = newNode;
        }
        else {
            head = newNode;
        }
        tail = newNode;
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