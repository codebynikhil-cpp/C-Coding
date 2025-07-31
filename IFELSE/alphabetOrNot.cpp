#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;
    // cout<<ch<<endl;
    // a to z -> 97 to 112
    // A to Z -> 65 to 90
    int ascii = (int)ch; //typecasting
    if(ascii>=97 && ascii<=112  || ascii>=65 && ascii<=90){
        cout<<"The character is alphabet";
    } 

    // if(ascii>=65 && ascii<=90){
    //     cout<<"The character is uppercase alphabet";
    // }{
    else 
    {
        cout<<"The character is not alphabet ";
    }
    return 0;

}