#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter month number :";
    cin>>x;
    switch(x){
        case 1 :
            cout<<"31";//Jan
            break;
        case 2 :
            cout<<"28";//Feb
            break;
        case 3 :
            cout<<"31";//March
            break;
        case 4 :
            cout<<"30";//April
            break;
        case 5 :
            cout<<"31";//May
            break;
        case 6 :
            cout<<"30";//June
            break;
        case 7 :
            cout<<"31";//July
                   break;
        case 8 :
            cout<<"31";//august
                   break;
        case 9 :
            cout<<"30";//september
                   break;
        case 10 :
            cout<<"31";//october
                   break;
        case 11 :
            cout<<"30";//november
                   break;
        case 12 :
            cout<<31;//december
            break;
        default : 
            cout<<"Invalid number";

    }
    return 0;
}