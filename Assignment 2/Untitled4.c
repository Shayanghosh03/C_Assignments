/*Write a C program to calculate Compound Interest.
[ci=principle*(pow((1+rate/100),time))]*/
#include<stdio.h>
int main()
{
    float s,p,r,t,ci;
    printf("Enter the Principle Amount: ");
    scanf("%f",&p);
    printf("Enter the time: ");
    scanf("%f",&t);
    printf("Enter the rate: ");
    scanf("%f",&r);
    s=(1+r/100);
    ci=p*(pow(s,t));
    printf("\nCompound Interest is : %.3f",ci);
    return 0;
}
