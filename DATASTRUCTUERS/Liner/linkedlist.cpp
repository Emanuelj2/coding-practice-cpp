#include <iostream>
using namespace std;

template <typename T>
struct Node{
    T data;
    Node<T> * next;

    Node(T val):data(val), next(nullptr){}
};

template <typename T>
class SLL{
public:
    Node<T> * head;

    //constructor
    SLL():head(nullptr){}


    void push(Node<T> *val){
        Node<T>* newNode = new Node<T>(val);
        Node<T> *curr = head;
        
        if(curr = nullptr){
            head = newNode;
        }
        else{
            while()
        }
    }
};