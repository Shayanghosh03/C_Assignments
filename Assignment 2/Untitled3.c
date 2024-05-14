/*Write a C program to find the area of a triangle
using Heron's Formula.[sqrt(s*(s-a)*(s-b)*(s-c)](Where s=(a+b+c)/2)*/
#include<stdio.h>
#include<math.h>
int main()
{
    float s,a,b,c,area;
    printf("Enter the length of three sides of a triangle: \n");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nThe area of the triangle is: %.3f",area);
    return 0;
}
