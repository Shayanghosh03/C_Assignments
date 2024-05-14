/*Write a C program to print the Fibonacci
series up to Nth term*/
#include<stdio.h>
int main()
{
    int i,n,a=0,b=1,c;
    printf("Enter the range: ");
    scanf("%d",&n);
    printf("%d\t%d",a,b);
    for(i=3;i<=n;i++)
    {
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
    }
    return 0;
}
