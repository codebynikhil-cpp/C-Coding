#include<iostream>
using namespace std;
int maxthree(int a,int b, int c){
    int max;
    if(a>b && a>c){
        return 100;
    }
    else if(b>c && b>a){
        return 100;
    }
    else return c;

}
int main(){
    int a=2, b = 9 , c = 79;
    cout<<maxthree(a,b,c);
    return 0;
}