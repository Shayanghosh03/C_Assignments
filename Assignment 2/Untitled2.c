/*Write a C program for swapping of two numbers
without using a temporary variable.*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the 1st number: ");
    scanf("%d",&a);
    printf("Enter the 2nd number: ");
    scanf("%d",&b);
    printf("\nBefore swapping \n 1st number = %d \n 2nd number = %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping\n 1st number = %d \n 2nd number = %d",a,b);
    return 0;
}
