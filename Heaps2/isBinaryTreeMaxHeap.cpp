#include <iostream>
#include <vector>
#include <queue>
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

int sizeofTree(Node* root){
  if(root==NULL) return 0;
  return 1 + sizeofTree(root->left) + sizeofTree(root->right);
}
bool isCBT(Node* root){
  int size = sizeofTree(root);
  int count = 0;
  queue<Node*> q;
  q.push(root);
  while(count<size){
    Node* temp = q.front();
    q.pop();
    count++;
    if(temp!= NULL) {
      q.push(temp->left);
      q.push(temp->right);
    }
  }
  if(q.size()>0){
    Node* temp = q.front();
    if(temp!=NULL) return false;
    q.pop();
  }
  return true;
}

bool isMax(Node* root){
  if(root==NULL) return true;
  if(root->left !=NULL && root->val < root->left->val) return false; 
  if(root->right !=NULL && root->val < root->right->val) return false;
  return isMax(root->left) && isMax(root->right);
}
int main(){
  Node* a = new Node(20);
  Node* b = new Node(15);
  Node* c = new Node(10);
  Node* d = new Node(8);
  Node* e = new Node(11);
  Node* f = new Node(6);
  Node* g = NULL;
  a->left = b; a->right = c;
  b->left = d; b->right = e;
  c->left = f; c->right = g;
  cout<<isMax(a);
  //Solution
  if(isCBT(a) && isMax(a)) cout<<"Tree is MaxHeap";
  else cout<<"Tree is not a MaxHeap";
}