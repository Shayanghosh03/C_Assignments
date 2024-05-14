#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the range: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            printf("*");
        }
        for(k=1;k<=2*i-3;k++)
        {
            printf(" ");
        }
        for(j=n;j>=i;j--)
        {
            if(j==1)
            {
                continue;
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
