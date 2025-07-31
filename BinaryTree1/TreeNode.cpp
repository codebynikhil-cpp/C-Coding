#include<iostream>
#include<conio.h>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void displayTree(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}
int sum(Node* root){
    if(root == NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);
}
int size(Node* root){
    if(root == NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}
int levels(Node* root){
    if(root == NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
}
int maxinTree(Node* root){
    if(root == NULL) return INT_FAST16_MIN;
    int leftmax = maxinTree(root->left);
    int rightmax = maxinTree(root->right);
    return max(root->val,max(leftmax,rightmax));
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(15);
    Node* f = new Node(6);
    Node* g = new Node(7);
    Node* h = new Node(8);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    g->right = h;
    displayTree(a);
    cout<<endl;
    cout<<sum(a);
    cout<<"\nsize of the tree = "<<size(a);
    cout<<"\nMax of the tree = "<<maxinTree(a);
    cout<<"\nlevel of the tree = "<<levels(a);
}