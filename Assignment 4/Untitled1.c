/*Write a C program to input any week day number
and print corresponding week day name using switch case*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter week number between (1-7): ");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednessday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default :
        printf("\nInvalid input\nPlease enter week number between(1-7)\n");
    }
    return 0;
}
