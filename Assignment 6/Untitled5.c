/*Write a C program to check an integer is
strong number or not*/
#include<stdio.h>
int main()
{
    int i,n,s=0,f=1,r,temp;
    printf("Enter any number: ");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        f=1;
        for(i=1;i<=r;i++)
        {
            f=f*i;
        }
        s=s+f;
        n=n/10;
    }
    if(s==temp)
    {
        printf("\n%d is a Strong Number",temp);
    }
    else
    {
        printf("\n%d is not a Strong Number",temp);
    }
    return 0;
}
