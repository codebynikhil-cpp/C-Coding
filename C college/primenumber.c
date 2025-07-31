#include <stdio.h>
int main(){
    int n,count=0;
    printf("ENter the numebr : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count+=1;
    
        }
    }
    if(count==2){
        printf("The number is prime");
    }
    else{
        printf("The number is not prime");
    }
    }