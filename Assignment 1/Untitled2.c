//Write a C program for addition , subtraction, multiplication and division of two numbers
#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter 1st Number: ");
    scanf("%f",&a);
    printf("Enter 2nd Number: ");
    scanf("%f",&b);
    printf("\nAddition of two numbers = %.3f",a+b);
    printf("\nSubtraction of two numbers = %.3f",a-b);
    printf("\nMultiplication of two numbers = %.3f",a*b);
    printf("\nDivision of two numbers = %.3f",a/b);
    return 0;
}
