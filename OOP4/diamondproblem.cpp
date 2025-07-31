#include<iostream>
#include<vector>
#include<string>
using namespace std;
class  A{
private:  // can't be accesses from outside, can't be inherited
    int a_ka_private;
// protected: // can't be accessed, can be inherited
//     int a_ka_protected;
public: // can be accessed, can be inherited
    int a_ka_public;
    A(){
        cout<<"A ka constructor call hua!\n";
    }
};
class B : virtual public A{ 
public:
    int b_ka_public;
    B(){
        cout<<"B ka constructor call hua!\n";
    }
};
class C :virtual public A { 
public:
    int c_ka_public;
    C(){
        cout<<"C ka constructor call hua!\n";
    }
};
class D : public B, public C{
    public: 
        int d_ka_public;
    void show(){
        cout<<a_ka_public<<endl;
    }
};
int main(){
    // A a;
    // B b;
    // C c;
    D d;
    d.a_ka_public = 10;
    d.show();
    // b.a_ka_public = 5;
}   