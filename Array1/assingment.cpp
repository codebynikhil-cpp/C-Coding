// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of an array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the element of an array : ";
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     int product = 1;
//     for(int i=0;i<=n-1;i++){
//         product *=arr[i]; 
//     }
//     cout<<"The product is : "<<product;
// }

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of an array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the element of an array : ";
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     int max1 ,max2;
//     max1= max2 =INT_MIN;
//     for(int#include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of an array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the element of an array : ";
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     int min = arr[1];
//     for(int i=1;i<=n-1;i++){
//         if(min>arr[i]){
//             min = arr[i];
//         }                                                                                                                                                                
//     }
//     cout<<min;
// } i=0;i<=n-1;i++){
//         if(max1<arr[i]){
//             max2=max1;
//             max1 = arr[i];
//         }                                                                                                                                                                
//     }
//     cout<<max2;
// }

// 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array number : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    bool flag= false ;
    for(int i=0;i<=n-1;i++){         
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]==arr[j] ){
              flag = true;
            }
        }
  if(flag==true){
            break;
        }
    }
    if(flag==true){
        cout << "Duplicate found" << endl;
    }
    else{
        cout << "No duplicate" << endl;
    }
    return 0;
}