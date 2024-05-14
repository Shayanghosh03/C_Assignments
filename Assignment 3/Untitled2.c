/*Write a C program to find the maximum of three numbers
using if-else.*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    printf("Enter 3rd number: ");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("\n%d is Maximum",a);
        }
        else
        {
            printf("\n%d is Maximum",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("\n%d is Maximum",b);
        }
        else
        {
            printf("\n%d is Maximum",c);
        }
    }
    return 0;
}
