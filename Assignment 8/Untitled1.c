// 1 4 9 16 25 36. . . . . n
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    printf("Enter the range: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%.0f\t",(pow(i,2.0)));
    }
    return 0;
}
