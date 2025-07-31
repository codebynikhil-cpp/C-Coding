//    1

// #include<stdio.h>
// int main(){
//     int v,w,tf,tt;
//     printf("Enter the number of vehicle : ");
//     scanf("%d",&v);
//     printf("Enter the number of wheels : ");
//     scanf("%d",&w);
//     tf=(w-v*2)/2;
//     tt = v-tf;
//     printf("The number of two wheeler is: %d",tt);
//     printf("\nThe number of four wheeler is: %d",tf);
// }

//   2

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number of rows in fibonacci series : ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         int a=0,b=1;// for each time when it change the rows required value
//         printf("%d\t",b);// for printing one on starting 
//         for(int j=1;j<i;j++)
//         {
//             int c=a+b;
//             printf("%d\t",c);
//             a=b;
//             b=c;
//         }
//         printf("\n");
//     }
// }

//     3

#include<stdio.h>
void merge(int A[],int l,int m,int h){
    int i,j,k;
    int B[100];
    i=l;
    j=m+1;
    k=l;
    while(i<=m && j<=h){
        if(A[i]<A[j]){
            B[k]=A[i];
            i++;k++;
        }
        else{
            B[k]=A[j];
            j++;k++;
        }
    }
    while(i<=m){
        B[k]=A[i];
        i++;k++;
    }
    while(j<=h){
        B[k]=A[j];
        i++;k++;
    }
    for(int i=l;i<=h;i++){
        A[i]=B[i];
    }
}
void mergesort(int arr[],int l,int h){
    if(l<h){
        int m = (l+h)/2;;
        mergesort(arr,l,m);
        mergesort(arr,m+1,h);
        merge(arr,l,m,h);
    }
}
void printarray(int a[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int arr[]={12, 11, 13, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("The given array is :");
    printarray(arr,n);
    mergesort(arr,0,n-1);
    printf("\nSorted array is :");
    printarray(arr,n);
}

//      4

// #include<stdio.h>
// int main(){
//     float a1real,a1img,a2real,a2img;
//     printf("Enter the real and imaginary part of 1 :");
//     scanf("%f%f",&a1real,&a1img);
//     printf("Enter the real and imaginary part of 2 :");
//     scanf("%f%f",&a2real,&a2img);
//     printf("1st complex number is : %.2f + %.2fi \n",a1real,a1img);
//     printf("2nd complex number is : %.2f + %.2fi \n",a2real,a2img);
//     printf("The sum of the complex number is : %.2f + %.2fi",a1real+a2real,a1img+a2img);
// }
// OR
// #include <stdio.h>
// struct Complex {
//     float real;
//     float imag;
// };
// struct Complex addComplex(struct Complex num1, struct Complex num2) {
//     struct Complex result;
//     result.real = num1.real + num2.real;
//     result.imag = num1.imag + num2.imag;
//     return result;
// }
// int main() {
//     struct Complex num1, num2, result;
//     printf("Enter real and imaginary parts of the first complex number:\n");
//     scanf("%f%f", &num1.real,&num1.imag);
//     printf("\nEnter real and imaginary parts of the second complex number:\n");
//     scanf("%f%f", &num2.real,&num2.imag);
//     result = addComplex(num1, num2);
//     printf("\nSum of the two complex numbers: %.2f + %.2fi\n", result.real, result.imag);
//     return 0;
// }

//       5

// #include<stdio.h>
// int main(){
//     int n,k,j,m,p;
//     float atebanana,atepeanut;
//     scanf("%d%d%d%d%d",&n,&k,&j,&m,&p);
//     if(n<0 || k<0 || j<0 || m<0 || p<0){
//         printf("Invalid input");
//     }
//     else{
//         if(k>0){ // Calculate the number of bananas and peanuts each monkey ate
//             atebanana = (float)(m/k);// no of monkey 
//             m=m%k;// no of left banana after eating 
//         }
//         if(j>0){
//             atepeanut = (float)(p/j);// no of monkey 
//             p=p%j;// no of left peanut after eating 
//         }
//         n = n - atebanana - atepeanut;
//         if(m!=0||p!=0){
//             n = n-1;//If there are leftover bananas or peanuts,
//             // it further reduces the number of monkeys by 1.
//         }
//         printf("Number of Monkeys left on the Tree: %d", n);
//     }
//     return 0;
// }
// OR
// #include<stdio.h>
// int main(){
//     int m,b,p,ab,ap,ate,n;
//     printf("Enter the no of monkey  :");
//     scanf("%d",&m);
//     printf("Enter the no of banana  :");
//     scanf("%d",&b);
//     printf("Enter the no of peanut  :");
//     scanf("%d",&p);
//     printf(" no of banana eaten by one monkey :");
//     scanf("%d",&ab);
//     printf(" no of peanut eaten by one monkey :");
//     scanf("%d",&ap);
//     if(b<ab && p<ap){
//         printf("Not enough food ");
//     }
//     else {
//         ate = b/ab + p/ap;
//         n=m-ate;
//         printf("left monkey = %d ",n);
//     }
//     ab=b%ab;
//     ap=p%ap;
//     if(ab!=0 || ap!=0){
//         n=n-1;
//         printf("left monkey = %d ",n);
//     }
// }

//    6 

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[100], result;
//     int len,max = 0;
//     int freq[256] = {0};// assuming ascii character
//     printf("Please Enter a String : ");
//     fgets(str, 100, stdin);
//     len = strlen(str);
//     for(int i=0;i<len;i++){       
//             freq[str[i]]++;
//     } 
//     for(int i=0;i<len;i++){
//         if(max <= freq[str[i]]){
//             max = freq[str[i]];
//             result = str[i];
//         }
//     }   
// printf("\n Maximum Occurring Character in a String %s is '%c' %d times", str, result, max);
// return 0;
// }

//     7 

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str1[20],str2[20];//defining the length of strings
//     int len1,len2,i,j,found=0,notfound=0;
//     printf("Enter first string: ");
//     gets(str1);
//     printf("Enter second string: ");
//     gets(str2);
//     len1 = strlen(str1);//calculating the length of strings
//     len2 = strlen(str2);
//     if(len1==len2){ // length of both strings should be same
//         for(int i=0;i<len1;i++){
//             found= 0;//initially found is 0
//             for(int j=0;j<len1;j++){
//                 if(str1[i]==str2[j]){
//                     found = 1;
//                     break;
//                 }
//             }
//             if(found==0){//if found is 0 then string is not anagram
//                 notfound = 1;
//                 break;
//             }
//         }
//         if(notfound == 1)
//             printf("\n The String is not angaram  ");
//         else
//         printf("THe string is angaram ");    
//     }
//     else 
//     printf("The lenght of string should be equal to be a angaram");
//     return 0;
// }

//       8

// #include<stdio.h>
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printf("Original array is : ");
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     int k;
//     printf("\nEnter the no of rotation :");
//     scanf("%d",&k);
//     for(int i=0;i<k;i++){
//         int last = arr[n-1];
//         // Shift elements to the right
//         for(int j =n-1;j>0;j--){
//             arr[j]=arr[j-1];
//         }
//         arr[0]=last;// Move the last element to the beginning
//     }
//     printf("\n");
//     printf("Array after right rotation : \n");
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

//  9 

// #include<stdio.h>
// int main(){
//     int h, h1, m;
//     char am_pm;
//     printf("Enter the time in 12-hour format hh mm am_pm: ");
//     scanf("%d %d %c", &h, &m, &am_pm);
//     h1 = h;
//     if (am_pm == 'a' || am_pm == 'A'){
//         if (h1 == 12) h1 = 0;
//         printf("%02d:%02d am is the same as %02d:%02d in 24-hour format\n", h, m, h1, m);
//     }
//     else if (am_pm == 'p' || am_pm == 'P') { 
//         if (h1 != 12) h1 += 12;
//         printf("%02d:%02d p.m is the same as %02d:%02d in 24-hour format\n", h, m, h1, m);
//     }
//     return 0;
// }

//     10

// #include<stdio.h>
// int main() {
//     int r1, c1, r2, c2;
//     int flag = 1;
//     printf("Enter the order of the matrix 1: ");
//     scanf("%d %d", &r1, &c1);
//     printf("Enter the order of the matrix 2: ");
//     scanf("%d %d", &r2, &c2);
//     if (r1 != r2 || c1 != c2) {
//         printf("Matrices cannot be compared. They have different orders.\n");
//         return 1;
//     }
//     printf("Enter the first matrix:\n");
//     int arr[r1][c1];
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c1; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("Enter the second matrix:\n");
//     int brr[r2][c2];
//     for (int i = 0; i < r2; i++) {
//         for (int j = 0; j < c2; j++) {
//             scanf("%d", &brr[i][j]);
//         }
//     }
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c2; j++) {
//             if (arr[i][j] != brr[i][j]) {
//                 flag = 0;
//                 printf("Matrices are not equal. First difference at (%d, %d).\n", i, j);
//                 break;  // No need to check the rest of the elements
//             }
//         }
//         if (flag == 0) {
//             break;  // Break outer loop if a difference is found
//         }
//     }
//     if (flag == 1)
//         printf("Matrices are equal.\n");
//     else
//         printf("Matrices are not equal.\n");
//     return 0;
// }

