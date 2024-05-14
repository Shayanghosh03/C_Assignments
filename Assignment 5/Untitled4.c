/*Write a C program to find the GCD of two numbers*/
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the 1st number: ");
    scanf("%d",&n1);
    printf("Enter the 2nd number: ");
    scanf("%d",&n2);
    while(n1!=n2)
    {
        if(n1>n2)
        {
            n1=n1-n2;
        }
        else
        {
            n2=n2-n1;
        }
    }
    printf("\nGCD of two number is %d\n",n1);
    return 0;
}
