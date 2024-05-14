/*Write a C program to check an integer is
Armstrong number or not*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,temp,s=0,count=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    n=temp;
    while(n!=0)
    {
        r=n%10;
        s=s+pow(r,count);
        n=n/10;
    }
    if(temp==s)
    {
        printf("\n%d is an Armstrong Number",temp);
    }
    else
    {
        printf("\n%d is Not an Armstrong Number",temp);
    }
    return 0;
}
