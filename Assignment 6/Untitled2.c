/*Write a C program to reverse an integer and
check an integer is palindrome or not*/
#include<stdio.h>
int main()
{
    int n,r,s=0,temp;
    printf("Enter any number: ");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    printf("\n%d reverse number is %d",temp,s);
    if(temp==s)
    {
        printf("\n%d is Palindrome Number",temp);
    }
    else
    {
        printf("\n%d is not a Palindrome Number",temp);
    }
    return 0;
}
