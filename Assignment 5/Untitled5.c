/*Write a C program to check a number
is prime or not*/
#include<stdio.h>
int main()
{
    int n,i,flag=1;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%2==0)
        {
            printf("\n%d is not a Prime Number!!!\n",n);
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("\n%d is a Prime Number\n",n);
    }
    return 0;
}
