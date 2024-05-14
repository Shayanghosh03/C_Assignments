/*Write a C program to calculate the summation
and average of first N natural numbers*/
#include<stdio.h>
int main()
{
    int i,n;
    float avg,s=0;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    avg=s/n;
    printf("\nSummation of the numbers is = %.3f",s);
    printf("\nAverage of the numbers is = %.3f",avg);
    return 0;
}
