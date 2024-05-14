/*Write a C program to calculate distance between two points.
[d=sqrt(pow((x2-x1),2)+pow((y2-y1),2))]*/
#include<stdio.h>
int main()
{
    float x1,x2,y1,y2,a,b,dis;
    printf("Enter the value of Points:\n");
    printf("Input x1: ");
    scanf("%f",&x1);
    printf("Input y1: ");
    scanf("%f",&y1);
    printf("Input x2: ");
    scanf("%f",&x2);
    printf("Input y2: ");
    scanf("%f",&y2);
    a=pow((x2-x1),2);
    b=pow((y2-y1),2);
    dis=sqrt(a+b);
    printf("\nDistance between the two points: %.3f",dis);
    return 0;
}
