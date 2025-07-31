#include<stdio.h>
int main()
{   int i,j;
    int arr[8]={1,2,2,1,3,4,3,2};
    for(i=0;i<8;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i]==arr[j])//true
            {
                break;
            }
        }
        if(i==j)
        printf ("%d ",arr[j]);
    }
}