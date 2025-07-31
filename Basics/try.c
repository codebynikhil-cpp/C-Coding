// #include<stdio.h>
// int main (){
//     int num1,num2;
//     float result=0;
//     char op;
//     printf("Enter the two numbers : ");
//     scanf("%d%d",&num1,&num2);
//     printf("Enter the operator :");
//     scanf(" %c",&op);
//     if (op=='+'){
//         result = num1 + num2;
//     }
//     else if (op=='-'){
//         result = num1 - num2;
//     }
//     else if (op=='*'){
//         result = num1 * num2 ;
//     }
//     else if(op=='/'){
//         if(num2==0){
//             printf("Divide by zero error");
//             return 1;
//         }
//         else
//         result = num1/num2;
//     }
//     else if (op=='%'){
//         if(num2==0){
//             printf("Divide by zero error");
//             return 1;
//         }
//         else{
//         result = num1%num2;
//         }
//     }
//     else
//     printf("invalid operator ");
// printf("result is= %.2f", result);
//     return 0;
// }
// // #include<stdio.h>
// #include<math.h>
// int main(){
//     float a,b,c,D,rpart,ipart,r1,r2;
//     printf("Enter the value of a,b,c : ");
//     scanf(" %f%f%f",&a,&b,&c);
//     if(a==0){
//         printf("Linear Equation  ");
//         return 1;
//     }
//     D=(b*b)-(4*a*c);
//     if(D==0){
//         r1=-b/(2*a);
//         r2=r1;
//         printf("roots are real and  equal \nr1 %f\n r2 %f\n ", r1, r2);
//     }
//     else if(D>0){
//         r1=-b/(2*a)+sqrt(D)/(2*a);
//         r2=-b/(2*a)-sqrt(D)/(2*a);
//         printf("roots are real and  Distinct \n root1= %f\nroot2= %f\n ", r1, r2);
//     }
//     else{
//     rpart=-b/(2*a);
//     ipart=sqrt(-D)/(2*a);
//     printf("roots are imaginary and  Distinct  ");
//     printf("root1=%f+i%f", rpart, ipart);
//     printf("root2=%f+i%f", rpart, ipart);
//     }
// return 0;
// }

// #include<stdio.h>
// int main(){
//     char name[10];
//     int units ;
//     float charges ,total;
//     printf("Enter the name \n");
//     scanf("%s",&name);
//     printf("Enter Units : ");
//     scanf("%d",&units);
//     if(units>0 && units<=200){
//         charges = 0.8*units;
//     }
//     else if(units>200 && units<=300){
//         charges = (0.8*200)+((300-units)*0.9);
//     }
//     else if(units>300 ){
//         charges = (0.8*200)+(100*0.9)+((units-300)*1);
//     }
//     else 
//         printf("invalid unit ");
//     total = charges + 100;
//     if(total >400){
//         total = total +(total*0.15);
//     }
//     printf("------ Electricity bill ------ \n");
//     printf("name is : %s \n",name);
//     printf("no of units is %d \n",units);
//     printf("total charges is : %.2f \n",total);
//     return 0;
// }
#include <stdio.h>
#include <math.h>
#define pi 3.1425
int main() {
    float degree, x, nume, deno, term, sum, sinl;
    int i = 1;
    printf("Enter degree: ");
    scanf("%f", &degree);
    x = degree * (pi / 180);
    nume = x;
    deno = 1;
    sum = 0;
    do {
        term = nume / deno;
        sum = sum + term;
        i = i + 2;
        nume = nume * x * x * (-1);
        deno = deno * i * (i - 1);
    } while (fabs(term) > 0.000001);
    sinl = sin(x);
    printf("Using Taylor series, sin(%.2f) is %.2f\n",degree,sum);
printf("Using inbuilt function,sin(%..2f)is %.2f\n",degree,sinl);

    return 0;
}
