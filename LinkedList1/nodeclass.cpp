#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};
int main() {
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    // cout << &a << endl;
    // cout << a.next << endl;
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;
    a.next->val = 70;
    cout << (*(a.next)).val << endl;
    cout << a.next->val << endl;
    return 0;
}
