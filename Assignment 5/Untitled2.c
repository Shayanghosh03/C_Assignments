/*Write a C program to find the factorial of
a number*/
#include<stdio.h>
int main()
{
    int i,n,f=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("\nFactorial of %d is = %d",n,f);
    return 0;
}
