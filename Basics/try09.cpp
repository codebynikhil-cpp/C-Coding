// #include<iostream>
// using namespace std;

// int main(){
//     int n , r=1;
//     int a,b=0,c=0;
//     cout<<"Enter the number : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         r = n % 10;
//         n = n/10;
//         if(r%2==0){
//             b = b + r;
//         }
//     }
//     cout<<b;
//     return 0;
// }

// #include <iostream>
// using namespace std ;
// int main(){
//     int n,r=0,a,b,c;
//     cout<<"Enter the number : ";
//     cin>>n;
//     b=n;
//     while(n>0){
//         r = r*10;
//         a = n%10;
//         r = r+a;
//         n=n/10;
//     }
//     // c = r+b;
//     cout<<"sum of a given number and its reverse : "<<r + b;
//     // cout<<r;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n , r,h;
//     cout<<"Enter the number : ";
//     cin>>n;
    
//     for(int i=1;i<=n;i++){
//         r = n % 10;
     
//     }
//     cout<<"the last digit :"<<r<<endl;
//     for(int u =1;u<=n;u++){
//         n = n/10;
//         if(n<10 && n>0){
//             h = n;
//         }
//     }
//     cout<<"The first digit :"<<h;
    
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n,r=1;
//     cout<<"Enter the number : ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         r = r*i;
//         cout<<r<<endl;
//     }
//     // cout<<r;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n,a=0,b=1,r=1;
//     cout<<"Enter the number : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<r<<" ";
//         r=a+b;
//         a=b;
//         b=r;
        
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int r=0,a=0,b=0,c=0,h=0;
    for(int i=1;i<=500;i++){
        r=i%10;
        a=i/10;
        b=a%10;
        h=a/10;
        c=h%10;
        if(i=((r*r*r)+(b*b*b)+(c*c*c))){
            cout<<i<<endl;
        }
    }
    return 0;
}
