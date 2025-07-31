// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the no of lines :";
//     cin>>n;
//     int p=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++)
//         cout<<" ";
//         for(int k=1;k<=p;k++){
//             cout<<k;
//         }
//         p+=2;
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the no of lines :";
//     cin>>n;
//     int p=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++)
//         cout<<" ";
//         for(int k=1;k<=p;k++){
//             cout<<(char)(k+64);
//         }
//         p+=2;
//         cout<<endl;
//     }
//     return 0;
//     }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the no of lines :";
//     cin>>n;
    
//     for(int i=1;i<=n;i++){
//         int b=1;
//         for(int j=1;j<=n-i;j++)
//         cout<<" ";
//         for(int k=i;k>=1;k--){
//             cout<<(char)(k+64);
//         }
//         for(int n=i-1;n>=1;n--){
//             cout<<(char)(b+65);
//             b++;
//         }
//         cout<<endl;
//     }
//     return 0;
//     }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the no of lines : ";
//     cin>>n;
//     for(int i=1;i<=2*n-1;i++){
//         cout<<(char)(i+64);
//     }
//     cout<<endl;
//     int m=n-1;
//     int nsp=1;
//     for(int i=1;i<=m;i++){
//         int a=1;
//         for(int j=1;j<=n-i;j++){
//         cout<<(char)(a+64);
//         a++;
//         }
//         for(int k=1;k<=nsp;k++){
//         cout<<" ";
//         a++;
//     }
//     nsp+=2;
//     for(int h=1;h<=n-i;h++){
//         cout<<(char)(a+64);
//         a++;
//     }
//     cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the no of lines : ";
//     cin>>n;
//     for(int i=1;i<=2*n-1;i++){
//         int a=i;
//         if(i>n)  a=2*n-i;
//         cout<<a;
//     }
//     cout<<endl;
//     int m=n-1;
//     int nsp=1;
//     for(int i=1;i<=m;i++){
//         for(int j=1;j<=n-i;j++){
//         cout<<j;

//         }
//         for(int k=1;k<=nsp;k++){
//         cout<<" ";
//     }
//     nsp+=2;
//     for(int h=n-i;h>=1;h--){
//         cout<<h;
//     }
//     cout<<endl;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of lines :";
    cin>>n;
    int a=2*n-3;
    for(int i=1;i<=n;i++){
        for(int j=i-1;j>=1;j--){
        cout<<" ";
        }
        cout<<"*";
        for(int j=1;j<=a;j++){
        cout<<" ";
        }
        a-=2;
        if(i!=n) cout<<"*";
    cout<<endl;
       }
    return 0;
}
