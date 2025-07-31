#include<iostream>
using namespace std;
class Student{ // User defined data types
public:
    string name;
    int rno;
    float marks;
    Student(string name,int rno,float marks){
        this->name = name;
        this->rno = rno;
        this->marks = marks;
    }
};
void change(Student &s){
    s.name = "Harsh";
}
int main(){
    Student s("Nikhil",76,92.6); 
    Student* ptr = &s;
    cout<<s.name<<endl;
    cout<<s.rno<<endl;
    (*ptr).name = "Harsh";
    cout<<s.name<<endl;
    (*ptr).rno = 86;
    ptr->name = "sanket";
    cout<<s.name<<endl;
    cout<<s.rno<<endl;


    int x = 6;
    int* p = &x;
    *p = 8;
    cout<<x<<endl;




    cout<<s.name<<endl;
    change(s);
    cout<<s.name<<endl;
}