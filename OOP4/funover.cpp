#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Bike{
public:
    int tyreSize;
    int engineSize;

    // Constructor Overloading
    Bike (int ts,int eS = 200) : tyreSize(ts), engineSize(eS) {}
    Bike (int ts) : tyreSize(ts), engineSize(100){}
    Bike() : tyreSize(12), engineSize(100){}
};

int main(){
    Bike royalfield(15,350);
    Bike honda(13);
    cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;
    cout<<royalfield.tyreSize<<" "<<royalfield.engineSize<<endl;
//     add(1,2);
//     add(5);
}   