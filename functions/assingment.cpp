// #include<iostream>
// using namespace std;
// int squa(int p){    
//     int a=1;
//     for(int i=1;i<=p;i++){
//         a=i*i;
//         cout<<a<<endl;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     squa(n);
// }

// #include<iostream>
// using namespace std;
// int area(float p){    
//     float a=3.14*p*p;
//         cout<<"The area is :"<<a;
//     }
// int main(){
//     float r;
//     cout<<"Enter the radius : ";
//     cin>>r;
//     area(r);
// }

// #include<iostream>
// using namespace std;
// int call(int p,int q){    
//     for(int i=p+1;i<=q;i++){
//         if(i%2!=0) cout<<i<<" ";
//     }
// }
// int main(){
//     int a,b;
//     cout<<"Enter the value of a :";
//     cin>>a;
//     cout<<"Enter the value of b :";
//     cin>>b;
//     call(a,b);
// }

#include<iostream>
using namespace std;
int square(int n){
    int r =1;
    r=n*n;
    return r;
}
int count(int n){
    int a=0;
while(n>0){
        n =n/10;
        a++;
    }
    cout<<"Number of terms : "<<a<<endl;
    }
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    count(n);
    cout<<"the square is : "<<square(n);
    return 0;
}
