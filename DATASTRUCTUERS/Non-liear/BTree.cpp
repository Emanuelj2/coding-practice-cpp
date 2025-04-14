#include <iostream>
#include <queue>
using namespace std;

//make the node
template<typename T>
struct Node{
    T data;
    Node<T>* left;
    Node<T>* right;

    Node(int val = 0):data(val), left(nullptr), right(nullptr){}
};

template <typename T>
class BTree{    
    public:
    Node<T> *root;
    
    BTree(): root(nullptr){}

    //INORDER 
    void inorder(Node<T> *tree){
        //first check if the tree is empty
        if(tree == nullptr){
            return;
        }
        inorder(tree->left);
        cout << tree->data << " ";
        inorder(tree->right);
    }

    //PREORDER
    void preorder(Node<T> *tree){
        //check if the tree is empty
        if(tree == nullptr){
            return;
        }
        cout << tree->data << " ";
        preorder(tree->left);
        preorder(tree->right);
    }

    //POSTORDER
    void postorder(Node<T> *tree){
        //check if the tree is empty
        if(tree == nullptr){
            return;
        }
        postorder(tree->left);
        postorder(tree->right);
        cout << tree->data << " ";
    }

    //LEVEL ORDER (use a queue)

};

int main (){
    return 0;
}