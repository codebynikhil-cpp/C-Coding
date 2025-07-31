#include<iostream>
using namespace std;

class Node { //user defined type
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList{ //User defined data structure
public:
    Node* head ;
    Node* tail ;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAthead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx,int val){
        if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
        else if(idx == 0) insertAthead(val);
        else if(idx == size) insertAtTail(val);
        else {
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1;i<idx;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Idx";
            return -1;
        }
        else if(idx == 0) head->val;
        else if(idx==size) tail->val;
        else{
            Node* temp = head;
            for(int i=1;i<=idx;i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }
    void deleteAtHead(){
        if(size ==0){
            cout<<"List is Empty";
            return;
        }
        head = head->next;
        size--;
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"List is Empty";
            return;
        }
        Node* temp = head;
        while(temp->next!=tail){
            temp = temp->next;
        }
        temp->next =NULL;
        tail = temp;
        size--;
    }
    void deleteAtidx(int idx){
        if(size==0){
            cout<<"List is Empty";
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid idx";
            return;
        }
        else if(idx == 0) return deleteAtHead();
        else if(idx==size-1) return deleteAtTail();
        else{
            Node* temp = head;
            for(int i=1;i<idx;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main() {
    LinkedList ll ; //{ }
    ll.insertAtTail(10);//{10->NULL}
    ll.display();
    ll.insertAtTail(20);//{10->20->null}
    ll.display();
    cout<<ll.size<<endl;
    ll.insertAtTail(30); //{10->20->30->null}
    ll.insertAtTail(40); //{10->20->30->40->null}
    ll.display();
    cout<<ll.size<<endl;
    ll.insertAthead(50); //{50->10->20->30->40->null}
    ll.display();
    ll.insertAthead(26); //{26->50->10->20->30->40->null}
    ll.display();
    ll.insertAtIdx(3,80); //{26->50->10->80->20->30->40->null}
    ll.display();
    // cout<<ll.getAtIdx(3)<<endl;
    // ll.display();
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtidx(3);
    ll.display();
}
