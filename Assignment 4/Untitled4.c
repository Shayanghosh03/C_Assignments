/*Write a C program to design a calculator with
basic operation using switch case*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float num1,num2;
    char op;
    printf("Enter 1st number: ");
    scanf("%d",&num1);
    printf("Enter 2nd number: ");
    scanf("%d",&num2);
    printf("Enter an Operator(+,-,*,/): ");
    fflush(stdin);
    scanf("%c",&op);
    switch(op)
    {
    case '+':
        printf("Addition is: %.3f",num1+num2);
        break;
    case '-':
        printf("Subtraction is: %.3f",num1-num2);
        break;
    case '*':
        printf("Multiplication is: %.3f",num1*num2);
        break;
    case '/':
        if(num2<=0)
        {
            printf("The answer will be Infinity");
        }
        else
        {
            printf("Division is: %.3f",num1/num2);
        }
        break;
    default:
        printf("\nInvalid Operation\nPlease Enter valid Operation!!!!!\n");
    }
    return 0;
}
