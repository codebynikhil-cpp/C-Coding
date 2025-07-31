#include<stdio.h>
int main (){
    int n,c=0,r,original;
    printf("Enter the number : ");
    scanf("%d",&n);
    original = n;
    while(n>0){
        r=n%10;
        c=(c*10)+r;
        n=n/10;
    }
    if(original==c){
        printf("palindrome number");
    }
    else
    printf("not palindrome number");
}