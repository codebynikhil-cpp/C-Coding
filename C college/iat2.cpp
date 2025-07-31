// #include<stdio.h>
// int main(){
//     int n,sum=0,avg,num;
//     printf("Enter the no of elements : ");
//     scanf("%d",&n);
//     if (n<=0) {
//         printf("Invalid input\n");
//         return 1; 
//     }

//     printf("Enter %d number :",n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&num);
//         sum+=num;
//     }

//     avg = sum/5;
//     printf("sum is : %d\n",sum);
//     printf("average is : %d",avg);

    
// }
// #include<stdio.h>
// int main(){
//     int n,a=0,b=0,temp;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     temp = n;
//     while(n>0){
//         a = n%10;
//         n = n/10;
//         b = b*10+a;
//     }
//     printf("Reverse of the number is : %d \n",b);
//     if(b==temp){
//         printf("It's palindrome number  ");
//     }
//     else {
//         printf("It's not palindrome number  ");
//     }
// }
#include <stdio.h>
int main() {
    int start, end,count=1;
    printf("Enter the starting range: ");
    scanf("%d", &start);
    printf("Enter the ending range: ");
    scanf("%d", &end);
    printf("Prime numbers between %d and %d are: \n", start, end);
    for (int i = start; i <= end; i++) {
        if(i%2==0) count+=1
    }

    return 0;
}
