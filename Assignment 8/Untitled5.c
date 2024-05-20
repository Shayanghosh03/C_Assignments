#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    float s=0;
    printf("Enter the range: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            s=s-(1.0/pow(i,2));
        }
        else
        {
            s=s+(1.0/pow(i,2));
        }
    }
    printf("Sum=%.3f",s);
    return 0;
}