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

    //push a node to the front of a list
    void push_to_front(T val){
        //make a node with the value
        Node<T> *newNode = new Node<T>(val);
        newNode->next = head;
        head = newNode;
    }

    //push a node to the end of the list
    void push(T val){
        Node<T>* newNode = new Node<T>(val);
        Node<T> *curr = head;
        
        if(curr == nullptr){
            head = newNode;
        }
        else{
            while(curr->next != nullptr){
                curr = curr->next;
            }
            curr->next = newNode;
        }
    }

    //search for the node
    Node<T> *search(T val){
        Node<T> *curr = head;

        while(curr != nullptr){
            if(curr->data == val){ //if the curr node has the value that we are looking for
                return curr;
            }
            curr = curr->next;
        }
        return nullptr;  
    }

    bool delete_node(T val){
        Node<T> *curr = head;
        //check if the list is empty
        if(curr == nullptr){
            return false;
        }
        if(head->data == val){
            return pop_front();
        }
        
        while(curr->next != nullptr){
            if(curr->next->data == val){
                Node<T> *temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
                return true;
            }
            curr = curr->next;
        }
        return false;
    }

    // delete the first node
    bool pop_front(){
        if(head == nullptr){
            return false;
        }
        Node<T>* temp = head;
        head = head->next;
        delete temp;
        return true;
    }

    //insert a node after the given node val
    bool insert_after(T val, T newVal){
        Node<T> * node = search(val);
        
        if(node == nullptr){
            return false;
        }
        Node<T> *newNode = new Node<T>(newVal);
        newNode->next = node->next;
        node->next = newNode;
        return true;
    }


    void printList()const{
        Node<T> *curr = head;

        while(curr != nullptr){
            cout << curr->data << " -> ";
            curr = curr->next; 
        }
        cout << "NULL" << endl;
    }
};

int main() {
    SLL<int> list;
    list.push(10);
    list.push(20);
    list.push_to_front(5);
    list.printList(); // 5 -> 10 -> 20 -> NULL

    list.delete_node(10);
    list.printList(); // 5 -> 20 -> NULL

    list.insert_after(20, 25);
    list.printList(); // 5 -> 20 -> 25 -> NULL

    if (list.search(20)) {
        cout << "Found 20" << endl;
    } else {
        cout << "20 not found" << endl;
    }

    list.pop_front();
    list.printList(); // 20 -> 25 -> NULL

    return 0;
}