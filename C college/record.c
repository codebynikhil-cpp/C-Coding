#include<stdio.h>
int main(){
    int n,temp,key,first,last,mid;
    printf("Enter the no of elements : ");
    scanf("%d",&n);
    printf("enter %d elments : ",n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Enter the key to search ");
    scanf("%d",&key);
    first = 0;
    last = n-1;
    while(first<=last){
        mid =(first+last)/2;
        if(key==a[mid]){
            printf("the element %d is found at locaion %d\n ",key,mid+1);
            return (0);
        }
        else if(key<a[mid]){
            last = mid -1;
        }
        else {
            first = mid +1;
        }
        }
printf("THe element %d is not found in the array \n",key);

    
}