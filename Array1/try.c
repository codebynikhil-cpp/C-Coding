#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,D,r1,r2,real,img;
    printf("Enter the value of a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0){
        printf("linear equation ");
        return 1;
    }
    D=(b*b)-(4*a*c);
    if(D==0){
        printf("Real and equal \n");
        r1=r2=-b/(2*a);
        printf("r1=%f,r2=%f",r1,r2);
    }
    else if (D>0){
        printf("Real and Distinct \n");
        r1=(-b+sqrt(D))/(2*a);
        r2=(-b+sqrt(D))/(2*a);
        printf("r1=%f,r2=%f",r1,r2);
    }
    else{
        printf("Distinct and imaginary \n");
        real = -b/(2*a);
        img = sqrt(-D)/(2*a);
        printf("r1=%f+i%f\n",real,img);
        printf("r2=%f-i%f\n",real,img);
    }
    return 0;
}