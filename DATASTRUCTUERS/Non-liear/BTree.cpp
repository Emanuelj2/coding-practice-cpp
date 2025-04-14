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


    //DISPLAY METHOD
    void print(string indent, Node<T> * tree, char sign = ' '){

        if(tree){
            print(indent + "    ", tree->right, ',');
            cout << indent + sign + "---" << tree->data << endl;
            print(indent + "     ", tree->left, '`');
        }
    }

    void print(){
        print("", root);
        cout << endl;
    }
};

int main (){
    BTree<char> tree;

    tree.root = new Node<char>('A');
    tree.print();
    tree.root->left = new Node<char>('B');
    tree.print();
    tree.root->right = new Node<char>('C');
    tree.print();
    tree.root->left->left = new Node<char>('D');
    tree.print();
    tree.root->left->right = new Node<char>('E');
    tree.print();
    tree.root->right->right = new Node<char>('F');
    tree.print();

    std::cout << "In-order traversal: ";
  tree.inorder(tree.root);
  std::cout << std::endl;

  std::cout << "Pre-order traversal: ";
  tree.preorder(tree.root);
  std::cout << std::endl;

  std::cout << "Post-order traversal: ";
  tree.postorder(tree.root);
  std::cout << std::endl;

    return 0;
}