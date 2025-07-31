#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of rows : ";
    cin>>m;
    cout<<"Enter the number of columns : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int brr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>brr[i][j];
        }
    }

         // 1
    // int c[m][n];
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         c[i][j] = arr[i][j] + brr[i][j];
    //     }
    // }
    // cout<<"The sum of the matrix is : ";
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<c[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

       //2
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<arr[i][j]+brr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //3 b ke andar a add krna hai
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            brr[i][j]+=arr[i][j];
        }
    }
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}