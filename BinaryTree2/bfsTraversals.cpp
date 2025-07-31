#include<iostream>
#include<conio.h>
#include<queue>
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
void nthlevel(Node* root, int curr, int level){
    if(root == NULL) return; //base work
    if(curr == level){
      cout<<root->val<<" "; // work
      return;
    }
    nthlevel(root->left, curr+1, level); // call 1
    nthlevel(root->right, curr+1, level); //call 2  
}
void nthlevelRev(Node* root, int curr, int level){
    if(root == NULL) return; //base work
    if(curr == level){
      cout<<root->val<<" "; // work
      return;
    }
    
    nthlevel(root->right, curr+1, level); //call 2
    nthlevel(root->left, curr+1, level); // call 1
    
}
int levels(Node* root){
  if(root == NULL) return 0;
  return 1 + max(levels(root->left),levels(root->right));
}
void levelOrder(Node* root){
  int n = levels(root);
  for(int i=1;i<=n;i++){
    // nthlevel(root,1,i);
    nthlevelRev(root,1,i);
    cout<<endl;
  }
}
void levelOrdreQueue(Node* root){
  queue<Node*> q;
  q.push(root);
  while(q.size()>0){
    Node* temp = q.front();
    q.pop();
    cout<<temp->val<<" ";
    if(temp->left != NULL) q.push(temp->left);
    if(temp->right != NULL) q.push(temp->right);
  }
  cout<<endl;
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    // nthlevel(a,1,3);
    // level order traversal
    // levelOrder(a);
    levelOrdreQueue(a);

    
}