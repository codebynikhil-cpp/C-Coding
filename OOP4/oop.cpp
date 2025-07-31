#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Bike{
public:
    int tyreSize;
    int engineSize;
    Bike (int ts,int eS = 200) : tyreSize(ts), engineSize(eS) {
    }
};
int main(){
    Bike royalfield(15,350);
    Bike honda(13);
    cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;
    cout<<royalfield.tyreSize<<" "<<royalfield.engineSize<<endl;
}   