// #include<iostream>
// using namespace std;

// int main(){
//     int n,b;
//     cout<<"Enter the no of rows : ";
//     cin>>n;
//     // cout<<"Enter the no of coloumns : ";
//     // cin>>b;
//     for(int i = 1;i<=n;){
//         for(int j=1;j<=n;j++)
//         cout<<"*";
//         cout<<endl;
//         n = n-1;
//     }

//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the no of rows : ";
//     cin>>n;
//     // cout<<"Enter the no of coloumns : ";
//     // cin>>b;
//     for(int i = 1;i<=n;i++){
//         for(int j=1;j<=i;j++)
//         cout<<j<<" ";
//         cout<<endl;
        
//     }

//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the no of rows : ";
//     cin>>n;
//     char A;
//     // cout<<"Enter the no of coloumns : ";
//     // cin>>b;
//     for(int i = 1;i<=n;i++){
//         int r = (int)A;
//         for(int j=1 ; j<=n ; j++)
//         cout<<r;
//         r++;
//         cout<<endl;
        
//     }

//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the no of rows : ";
//     cin>>n;
//     for(int i = 1;i<=n;i++){
//         for(int j=1 ; j<=n ; j++)
//         if(i==3){
//             cout<<"*";
//         }
//          else {
//             if(j==3) cout<<"  "<<"*";
//         }
//         cout<<endl;
//             }
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the no of rows : ";
//     cin>>n;
//     for(int i = 1;i<=n;i++){
//         for(int j=1 ; j<=n ; j++){
//         if(i==j || i+j==n+1) cout<<"*";
//         else cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the no of rows : ";
//     cin>>n;
//     int k=1;
//     for(int i = 1;i<=n;i++){
//         for(int j=1 ; j<=i ; j++){
//         cout<<k<<" ";
//         k++;
//         }
//         cout<<endl;
        
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the no of rows : ";
//     cin>>n;
//     for(int i = 1;i<=n;i++){
//         for(int j=1 ; j<=i ; j++){
//             cout<<1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;

int main(){
    int n,a=4;
    cout<<"Enter the no of rows : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j=1;j<=n;j++){
        if(j==a) cout<<"*"<<" ";
        else cout<<" ";
        }
        cout<<endl;
        a--;
    }
    return 0;
}