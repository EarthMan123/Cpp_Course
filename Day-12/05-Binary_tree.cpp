#include<iostream>

using namespace std;

class node{
    public:
        int data;
        node *left = NULL;
        node *right = NULL;
        node(int d){
            data = d;
        }

};

//         10
//     NULL  NULL
// 10 -1 -1

// 1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1

//                   1
//              2                3
//           4      5           6   7
//        -1  -1  -1 -1   -1 -1 -1 -1

node* buildTree(){
    int d;
    cin >> d;

    // Base Case
    if(d==-1){
        return NULL;
    }

    node *root = new node(d);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}

// Pre order traversal
void printPreorder(node *root){
    if(root==NULL){
        return;
    }
    // Data Left Right
    cout << root->data << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

// In order traversal
void printInorder(node *root){
    if(root==NULL){
        return;
    }
    // Left Data Right
    printInorder(root->left);

    cout << root->data << " ";
    
    printInorder(root->right);
}

// postorder traversal
void printPostorder(node *root){
    if(root==NULL){
        return;
    }
    // Left Right Data
    printPostorder(root->left);
    printPostorder(root->right);
    cout << root->data << " ";
}


int main(){
    // node *root = new node(10);
    // root->left = new node(20);
    // root->right = new node(25);
    // root->left->left = new node(30);
    // root->left->right = new node(35);

    node *root = buildTree();
    printPreorder(root);
    cout << endl;
    printInorder(root);
    cout << endl;
    printPostorder(root);
    cout << endl;
    return 0;
}