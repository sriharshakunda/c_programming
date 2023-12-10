#include <stdio.h>
#include <math.h>

int main(){

    int a,b,c;
    float d;


    //summation of two numbers
    printf("Addition Operation \n");
    printf("Enter values for a: ");
    scanf("%d",&a);
    printf("Enter values for b: ");
    scanf("%d",&b);
    c=a+b;
    printf("Sum of a & b= %d \n",c);



    //multiply two numbers
    printf("Multiplication Operation \n");

    printf("Enter values for a: ");
    scanf("%d",&a);
    printf("Enter values for b: ");
    scanf("%d",&b);
    c=a*b;
    printf("Multiplication of a & b= %d \n",c);



    //divide two numbers
    printf("Division Operation \n");
    
    printf("Enter values for a: ");
    scanf("%d",&a);
    printf("Enter values for b: ");
    scanf("%d",&b);
    d=(float)a/b;
    printf("Dividision of a & b= %f \n",d);



    //Modulus operation
    printf("Modulus Operation \n");
    printf("Enter values for a: ");
    scanf("%d",&a);
    printf("Enter values for b: ");
    scanf("%d",&b);
    c=a%b;
    printf("Modulus of a & b= %d \n",c);



 
   


    return 0;
}