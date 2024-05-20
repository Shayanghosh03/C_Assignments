#include<stdio.h>
#include<math.h>
 int main()
 { 
    int i,n,x,j,f;
    float s=1.0;
    printf("Enter the range:");
    scanf("%d",&n);
    printf("Enter the value of x:");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
      f=1;
      for(j=i*2;j>=1;j--)
      {
        f=f*j;
      }
      if(i%2==0)
      {
        s=s+(pow(x,2*i)/f);
      }
      else
      {
       s=s-(pow(x,2*i)/f);
      }
    }
    printf("sum = %.3f",s);
    return 0;
 }