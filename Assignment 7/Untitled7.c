#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the range: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%c",64+j);
        }
        printf("\n");
    }
    return 0;
}
