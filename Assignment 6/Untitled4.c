/*Write a C program to check an integer is perfect
number or not*/
#include<stdio.h>
int main()
{
    int num,i,r,s=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        r=num%i;
        if(r==0)
        {
            s=s+i;
        }
    }
    if(num==s)
    {
        printf("\n%d is a Perfect Number",num);
    }
    else
    {
        printf("\n%d is not a Perfect number",num);
    }
    return 0;
}
