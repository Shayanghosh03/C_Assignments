/* Write a C program to accept n elements of an array and 
print the sum of even and odd numbers*/
#include<stdio.h>
int main()
{
    int num[100];
    int i,n,sum1=0,sum2=0;
    printf("Enter the array size: ");
    scanf("%d",&n);
    printf("Enter the Array elemts you want \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        if(num[i]%2==0)
        {
            sum1=sum1+num[i];
        }
        else
        {
            sum2=sum2+num[i];
        }
    }
    printf("\nSum of Even numbers is %d",sum1);
    printf("\nSum of odd numbers is %d",sum2);
    return 0;
}