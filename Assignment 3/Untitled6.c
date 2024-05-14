/*Write a C program to calculate the root of a
Quadratic Equation*/
#include<stdio.h>
#include<math.h>
int main()
{
    float e,a,b,c,r,r1,r2;
    printf("\nEnter the coefficient values of Quadratic Equation:\n");
    scanf("%f %f %f",&a,&b,&c);
    e=(pow(b,2)-4*a*c);
    if(e>0)
    {
        r1=(-b+sqrt(e)/2*a);
        r2=(-b-sqrt(e)/2*a);
        printf("\nRoots of Quadratic Equation is R1 = %.3f",r1);
        printf("\nRoots of Quadratic Equation is R2 = %.3f",r2);
    }
    else if(e==0)
    {
        r=(-b/2*a);
        printf("\nRoots of Quadratic Equation is = %.3f",r);
    }
    else
    {
        printf("\nThe root is Imaginary");
    }
    return 0;
}
