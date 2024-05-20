//0 7 26 63
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    printf("Enter the range: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%.0f\t",(pow(i,3.0)-1));
    }
    return 0;
}
