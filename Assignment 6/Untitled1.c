/*Write a C program to count the number of digits
and calculate the sum of digits of an integer*/
#include<stdio.h>
int main()
{
    int n,r,s=0,count=0,temp;
    printf("Enter any number: ");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        count++;
        s=s+r;
        n=n/10;
    }
    printf("\n%d is %d digits number",temp,count);
    printf("\nSum of all digits are = %d",s);
    return 0;
}
