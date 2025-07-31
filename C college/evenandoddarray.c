#include<stdio.h>
int main(){
    int m;
    printf("enter number of element :");
    scanf(" %d",&m);
    int arr[m] ;
    for(int i=0;i<m;i++){
        printf("enter %d element :",(i+1));
        scanf("%d",&arr[i]) ;
    }
    int even=0 ,odd=0 ;
    for(int i=0;i<m;i++){
        if(arr[i]%2==0) even++ ;
        else odd++ ;
    }
    int e[even] ;
    int o[odd] ;
    int q=0 ,k=0 ;
    for(int i=0;i<m;i++){
        if(arr[i]%2==0) {
            e[q]=arr[i]; 
            q++ ;
        }
        else 
        {
            o[k]=arr[i] ;
            k++ ;
        }
    }
    printf("even element is ");
    for(int i=0;i<even;i++){
        printf(" %d ",e[i]) ;
    }
    printf("\n") ;
    printf("odd element is ");
    for(int i=0;i<odd;i++){
        printf(" %d ",o[i]);
    }
}