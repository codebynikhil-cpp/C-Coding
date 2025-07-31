#include<stdio.h>
int main(){
    int arr[] = {9, 20, 6, 3, 2, 12, 15};
    int n= sizeof(arr)/sizeof(arr[0]);
    int i,j;
    printf("Array before sorting: \n");
    for(int i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
    printf("\nArray after sorting:\n ");
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}