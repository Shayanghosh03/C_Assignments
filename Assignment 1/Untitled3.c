//Write a C program to calculate the average of three numbers
#include<stdio.h>
int main()
{
    int a,b,c;
    float avg;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    printf("Enter 3rd number: ");
    scanf("%d",&c);
    avg=(a+b+c)/3.0;
    printf("\nAverage of three numbers is = %.3f",avg);
    return 0;

}
