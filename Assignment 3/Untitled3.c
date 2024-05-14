/*Write a C program to find the Maximum of three numbers
using Conditional / Ternary Operator.*/
#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    printf("Enter 3rd number: ");
    scanf("%d",&c);
    max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("\n%d is Maximum",max);
    return 0;
}
