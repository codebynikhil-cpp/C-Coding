#include<iostream>
using namespace std;

int main(){
    int n,a;
    cout<<"Enter the no of rows : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        a=1;
        for(int j=1;j<=i;j++){
        cout<<a<<" ";
        a +=2;
        }
        cout<<endl;  
    }

    return 0;
}

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of rows : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        //first "i" odd number : 
        for(int j=1;j<=2*i-1;j+=2){
        cout<<j;
        }
        cout<<endl;  
    }

    return 0;
}