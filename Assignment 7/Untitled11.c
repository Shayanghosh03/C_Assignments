#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the range: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(k=i;k<n;k++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=n-1;i++)
    {
        for(k=i;k<n-1;k++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
