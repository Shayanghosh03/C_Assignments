/*Write a C program to convert temperature in Fahrenheit
to Celsius and Celsius to Fahrenheit.*/
#include<stdio.h>
int main()
{
    float fah,cel;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f",&fah);
    cel=(fah-32)*5/9;
    printf("\nTemperature in Celsius: %.3f",cel);
    printf("\nEnter the temperature in Celsius: ");
    scanf("%f",&cel);
    fah=(cel*9/5)+32;
    printf("\nTemperature in Fahrenheit: %.3f",fah);
    return 0;
}
