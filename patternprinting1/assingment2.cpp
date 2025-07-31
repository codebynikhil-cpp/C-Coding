// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++)
//         cout<<i;
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++)
//         cout<<j;
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++)
//         cout<<(char)(j+64)<<" ";
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if(i%2!=0)
//             cout<<j<<" ";
//             else cout<<(char)(j+64)<<" ";
//         }
        
//         cout<<endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
     for(int k=1;k<=n;k++){
        for(int j=1;j<=n-k;j++)
                cout<<"*";
                cout<<endl;
            }
    return 0;
}