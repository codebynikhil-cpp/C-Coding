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
    else{
        if(ascii>=47 && ascii<=57)
        cout<<"The character is digit";
        else{
            if((ascii>=32 && ascii<=47) ||(ascii>=58 && ascii<=64)||(ascii>=91 && ascii<=96)||(ascii>=123 && ascii<=126))
            cout<<"The character is Special charactear ";
            
            else {
                cout<<"Not satisfie the condition";
            }
        }
    }
    return 0;

}