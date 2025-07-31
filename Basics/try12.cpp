// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=1;i<=100;i+=2){
//         cout<<i<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     // int a ;
//     for(int i=1;i<=100;i++)
//     if(i%3==0) cout<<i<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     for(int i=1;i<=10;i++){
//     cout<<n*i<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number of terms : ";
//     cin>>n;
//     int a=4;
//     for(int i=1;i<=n;i++)
//     {
//     cout<<a<<endl;
//     a=a+3;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number of terms : ";
//     cin>>n;
//     int a=3;
//     for(int i=1;i<=n;i++)
//     {
//     cout<<a<<endl;
//     a=a*4;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int i=65 ;
    while (i<=122)
    {

        if((i>=65 &&i<=90) && (i>=97 && i<=122)){
        cout<<(char)i<<" "<<i<<endl;
                i++;}


    }
    return 0;
}