/*Write a C program to calculate Simple Interest.
[SI=Principle*Interest rate*Time] */
#include<stdio.h>
int main()
{
    int p,i,t;
    float si;
    printf("Enter the Principle Amount: ");
    scanf("%d",&p);
    printf("Enter the Interest rate: ");
    scanf("%d",&i);
    printf("Enter the time: ");
    scanf("%d",&t);
    si=(p*i*t);
    printf("\nThe Simple Interest is = %.3f",si);
    return 0;
}

