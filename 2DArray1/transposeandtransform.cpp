#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of rows/coloumns : ";
    cin>>m;
    int arr[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //print
    cout<<"Before swapping\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // transpose in the same matrix 
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            // swaping of i,j and j,i
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<1;j++){
    //         // swaping of i,j and j,i
    //         int temp = arr[i][j];
    //         arr[i][j+2] = arr[j][i];
    //         arr[j][i] = temp;
    //     }
    // }
      // PRINT
    // cout<<"after swapping\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}