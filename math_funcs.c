#include <math.h>
#include<stdio.h>

int main(){
    float a,b;
    printf("Enter value of a:\n");
    scanf("%f",&a);
    printf("Enter value of b:\n");
    scanf("%f",&b);

    printf("Adding %f & %f = %f \n",a,b,a+b);
    printf("Substract %f & %f = %f \n",a,b,a-b);
    printf("Multiply %f & %f = %f \n",a,b,a*b);
    printf("Divide %f & %f = %f \n",a,b,a/b);
    printf("Exp power of %f & %f = %f \n",a,b,pow(a,b));
    printf("Squre root of %f & %f = %f,%f \n",a,b,sqrt(a),sqrt(b));



    return(0);
}