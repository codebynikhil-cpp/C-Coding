#include<iostream>
using namespace std;

int main() 
{
    cout<<"Enter the marks : ";
    int n;
    cin>>n; 

        //** Method 1 **
//     if(n>=91 && n<=100){
//         cout<<"Excellent";
    
//     }
//     if(n>=81 && n<=90){
//         cout<<"Very good";
//     }
//     if(n>=71 && n<=80){
//         cout<<"Good";
//     }
//     if(n>=61 && n<=70){
//         cout<<"Can do better";
//     }
//     if(n>=51 && n<=60){
//         cout<<"Average ";
//     }
//    if(n>=40 && n<=50){
//     cout<<"Below Average";
//    }
//    if(n<40){
//     cout<<"Fail";   

        // ** Method 2 **
    //  if(n>=91){
    //     cout<<"Excellent";
    //  }
    //  else{
    //     if(n>=81){
    //         cout<<"Very Good ";
    //     }
    //     else{
    //         if(n>=71){
    //             cout<<"Good";
    //         }
    //         else{
    //             if(n>=61){
    //                 cout<<"Can do better ";
    //             }
    //             else{
    //                 if(n>=51){
    //                     cout<<"Average ";
    //                 }
    //                 else{
    //                     if(n>=40){
    //                         cout<<"Below Average";
    //                     }
    //                     else{
    //                         if(n<40){
    //                             cout<<"Fail";
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }
    //  }
     
                    //** Method 3 **
     if(n>=91){
        cout<<"Excellent";
     }
     else if(n>=81){
        cout<<"Very good";
     }
     else if(n>=71){
        cout<<"Good";
     }
     else if(n>=61){
        cout<<"Can do better ";
     }
     else if (n>=51){
        cout<<"Average ";
     }
     else if(n>=41){
        cout<<"Below Average ";
     }
     else {
        cout<<"Fail";
     }
    return 0;
}