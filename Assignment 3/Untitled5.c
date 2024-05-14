/*Write a C program to check  a given year
is Leap year or not*/
#include<stdio.h>
int main()
{
    int yr;
    printf("Enter the year: ");
    scanf("%d",&yr);
    if(yr%4==0 && yr%100!=0 || yr%400==0)
    {
        printf("\n%d is Leap Year",yr);
    }
    else
    {
        printf("\n%d is Not a Leap Year",yr);
    }
    return 0;
}
