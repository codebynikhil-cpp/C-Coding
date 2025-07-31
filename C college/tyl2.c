         //NIKHIL CODER 
       // Level Easy 
       //1
// #include<stdio.h>
// int main(){
//     int marks[5]={50,62,70,76,78};
//         int i,sum=0;
//         for(int i=0;i<5;i++){
//             sum = sum + marks[i];
//         }
//         float avg = sum/5;
//         printf("Average of the marks is %2.2f",avg);
//         return 0;
//         }

           //2
// #include<stdio.h>
// int main() {
//     int n, i, j;
//     printf("Enter the no of elements of an array: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter the elements of the array: ");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < n; i++) {
//         int found = 0; // Use a different variable name
//         for (j = 0; j < i; j++) {
//             if (arr[i] == arr[j]) {
//                 found = 1;
//                 break;
//             }
//         }
//         if (!found) {
//             printf("%d ", arr[i]);
//         }
//     }
//     return 0;
// }

       //3
// #include<stdio.h>
// int main(){
//     int n,sum=0;
//     printf("Enter the no of terms :  ");
//     scanf("%d", &n);
//     printf("The %d natural number are : ",n);
//         for (int i = 1; i <= n; i++){
//         printf("%d ",i);
//         sum = sum+i;
//     }
//     printf("\nThe sum of the natural number is : %d",sum);  
//     }

            //4
// #include<stdio.h>
// int main(){
//     int n,sum=0;
//     printf("Enter the no of terms :  ");
//     scanf("%d", &n);
//         for (int i = 1; i <= n; i++){
//         printf("number is %d and the cube of %d is : %d \n",i,i,i*i*i);
//         sum = sum+i;
//     }  
//     }

      //5
// #include<stdio.h>
// int main(){
//     int n,sum=0;
//     printf("Enter the no of terms :  ");
//     scanf("%d", &n);
//     printf(" natural number of %d odd terms are : \n",n);
//         for (int i = 1; i <= n; i++){
//             printf("%d ",2*i-1);
//             sum = sum+2*i-1;
//     }  
//     printf("\nThe sum of the odd natural number is : %d",sum);  
//     } 

       //6
// #include<stdio.h>      
// int main(){
//     int array[10]={2,3,5,4,6,8,7,95,32,54};
//     int max=array[0];
//     for(int i=0;i<10;i++){
//         if (max < array[i]) {
//             max = array[i];
//         }
//     }
//     printf("The maximum number is %d",max);

//     }
     
           //7
// #include<stdio.h>
// void main(){
//     int n;
//     printf("Enter the day no :");
//     scanf("%d",&n);
//     switch(n){
//         case 1:
//             printf("Monday");
//             break;
//         case 2:
//             printf("Tuesday");
//             break; 
//         case 3:
//             printf("Wednesday");
//             break;
//         case 4: 
//             printf("Thursday");
//             break;
//         case 5:
//             printf("Friday"); 
//             break;
//         case 6:
//             printf("Saturday");
//             break;
//         case 7:
//             printf("Sunday");
//             break;
//         default:
//             printf("Invalid");
//             break;
//     }
// }

         //8
// #include<stdio.h>
// int main (){
//     int num1,num2,max;
//     printf("Enter the first number : ");
//     scanf("%d",&num1);
//     printf("Enter the second number : ");
//     scanf("%d",&num2);
//     max=(num1>num2)?num1:num2;
//     while(1){
//         if(max%num1==0 && max%num2==0){
//             printf("The lcm of %d and %d is %d",num1,num2,max);
//             break;
//         }
//        max++;
//     }
// }


    //9
// #include<stdio.h>
// int main(){
//     int n;
//     while(1){
//     printf("Enter the number (press 0 to exit ) :");
//     scanf("%d",&n);
//     if(n==0){
//         printf( "The number is zero");
//         break;
//     }
//     else if(n>0) printf( "The number is positive");
//     else printf( "The number is negative");
//     printf("\n");
//     }
// }

       //10
// #include<stdio.h>
// int main(){
//     int n,r,product=1;
//     printf("Enter the number :"); 
//     scanf("%d",&n);
//     while(n>0){
//         r = n%10; 
//         n = n/10;
//         product = product*r;
//     }
 
//     printf("The product of the digits is : %d",product); 
//     return 0;
// }

     //Medium
     //1
// #include<stdio.h>
// int main(){
//     int arr[50];
//     int n,i;
//     printf("Enter the decimal no : ");
//     scanf("%d",&n);
//     while(n>0){
//         arr[i]=n%2;
//         n=n/2;
//         i++;
//     }
//     printf("\n");
//     for(int j=i-1;j>=0;j--){
//         printf("%d ",arr[j]);
//     }
// }

       //2
// #include<stdio.h>
// int main(){
//     int arr[50];
//     int n,i;
//     printf("Enter the decimal no : ");
//     scanf("%d",&n);
//     while(n>0){
//         arr[i]=n%8;
//         n=n/8;
//         i++;
//     }
//     printf("\n");
//     for(int j=i-1;j>=0;j--){
//         printf("%d ",arr[j]);
//     }
// }

     //3
// #include<stdio.h>
// int main(){
//     int i, j,r,c, a[10][10],sum=0;
//     printf("Enter the no of rows & coloumns : ");
//     scanf("%d%d",&r,&c);
//     printf("Enter the elements no : ");
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(int i=0;i<r;i++){
//         sum = sum + a[i][i];
//     }
//     printf("sum of the diagonal matrix is :%d ",sum);
// }

   //4
// #include<stdio.h>
// // #include<conio.h>
// #include<string.h>
// int main(){
//     char str[30];
//     int i;
//     printf("Enter the Uppercase word :");
//     scanf("%s",&str);
//     for( i=0;i<strlen(str);i++){
//         if(str[i]>=65 && str[i]<=90){
//             str[i]=str[i]+32;
//         }
//     }
//     printf("Lowers case word = %s",str);
// return 0;
// }

       //5
// #include<stdio.h>
// int main(){
//        int n,i,j;
//        printf("Enter the number  ");
//        scanf("%d",&n);
//        for(int i=1;i<=10;i++){
//               printf("%d * %d = %d\n",n,i,n*i);
//        }
//        return 0;
// }
      //6
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the no of terms : ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d",i);
            
//         }
//         printf("\n");
//     }
// }


         //7
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the no of terms : ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=n-i;j>0;j--){
//             printf(" ");
//         }
//         for(int k=1;k<=i;k++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }
     //8
// #include<stdio.h>
// int main(){
//     int n,position = -1,m;
//     printf("Enter the no of terms : ");
//     scanf("%d",&n);
//     int a[n];
//     printf("Enter the array numbers : ");
//     for(int i=0;i<n;i++){
//        scanf("%d",&a[i]);
//     }
//        printf("Enter the element to be searched  :");
//        scanf("%d",&m);
//     for(int i=0;i<n;i++){
//        if(a[i]==m){
//        position=i +1;
//        break;
//        }
//     }
//     if(position==-1){
//         printf("Element not found");
//     }
//        printf("Elements is found at %d position : ",position);
//     }

      //9
// #include<stdio.h>
// int main(){
//        int n,temp,sum=0,r;
//        printf("Enter the number :");
//        scanf("%d",&n);
//        temp = n;
//        for(int i=1;i<n;i++){
//               if(n%i==0){
//                      sum = sum +i;
//               }
//        }
//        if(temp==sum){
//               printf("The number is a perfect number ");
//        }
//        else
//               printf("It is not a perfect number ");
//        }

       //  10
#include<stdio.h>
int fact(int n){
       int f=1;
       for(int i=2;i<=n;i++){
              f*=i;
       }
       return f;
}
int combinations(int n,int r){
       int ncr=fact(n)/(fact(r)*fact(n-r));
       return ncr;
}
int main(){
    int n,i,j,k;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
       for(k=0;k<n-i;k++){
              printf(" ");
       }
       for(int j=0;j<=i;j++){
              printf("%d",combinations(i,j));
              printf(" ");
       }
     printf("\n");  
    }
}



 