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
}
