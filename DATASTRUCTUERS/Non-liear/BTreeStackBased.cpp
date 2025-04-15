#include <iostream>
#include <stack>
using namespace std;

template <typename T>
struct Node {
    T data;
    Node<T>* left;
    Node<T>* right;

    Node(T val) : data(val), left(nullptr), right(nullptr) {}
};

template <typename T>
class BinaryTree {
public:
    Node<T>* root;
    BinaryTree() : root(nullptr) {}

    void visit(Node<T>* node) {
        cout << node->data << " ";
    }

    // INORDER (Iterative)
    void inorder(Node<T>* root) {
        stack<Node<T>*> stk;
        Node<T>* node = root;

        while (!stk.empty() || node != nullptr) {
            if (node != nullptr) {
                stk.push(node);
                node = node->left;
            } else {
                node = stk.top();
                stk.pop();
                visit(node);
                node = node->right;
            }
        }
    }

    // POSTORDER (Iterative)
    void postorder(Node<T>* root) {
        stack<Node<T>*> stk;
        Node<T>* lastNodeVisited = nullptr;
        Node<T>* node = root;

        while (!stk.empty() || node != nullptr) {
            if (node != nullptr) {
                stk.push(node);
                node = node->left;
            } else {
                Node<T>* peekNode = stk.top();

                if (peekNode->right != nullptr && lastNodeVisited != peekNode->right) {
                    node = peekNode->right;
                } else {
                    visit(peekNode);
                    lastNodeVisited = peekNode;
                    stk.pop();
                }
            }
        }
    }

    //PREORDER (root ->left ->right)
    void preorder(Node<T> *root){
        stack<Node<T>*>stk;
        Node<T>* node = root;

        while(!stk.empty() || node != nullptr){
            if(node != nullptr){
                visit(node);    //visit the first node
                stk.push(node);
                node = node->left;  //go to left
            }
            else{
                node = stk.top();
                stk.pop();
                node = node->right;     //go to the right
            }
        }
    }



    // draw
    void draw(string indent, Node<T>* tree, char sign = ' ') {
        if (tree) {
            draw(indent + "     ", tree->right, ',');
            cout << indent + sign + "---" << tree->data << endl;
            draw(indent + "     ", tree->left, '`');
        }
    }

    void draw() {
        draw("", root);
        cout << endl;
    }
};

int main() {
    BinaryTree<char> tree;

    tree.root = new Node<char>('A');
    tree.draw();
    tree.root->left = new Node<char>('B');
    tree.draw();
    tree.root->right = new Node<char>('C');
    tree.draw();
    tree.root->left->left = new Node<char>('D');
    tree.draw();
    tree.root->left->right = new Node<char>('E');
    tree.draw();
    tree.root->right->right = new Node<char>('F');
    tree.draw();

    cout << "In-order traversal: ";
    tree.inorder(tree.root);
    cout << endl;

    cout << "Post-order traversal: ";
    tree.postorder(tree.root);
    cout << endl;

    cout << "Pre-order traversal: ";
    tree.preorder(tree.root);
    cout << endl;

    return 0;
}

