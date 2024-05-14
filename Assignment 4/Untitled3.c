/*Write a C program to check a number is odd or even
using switch case*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number to check even or odd: ");
    scanf("%d",&num);
    switch(num%2)
    {
    case 0:
        printf("\n%d number is Even\n",num);
        break;
    case 1:
        printf("\n%d number is Odd\n",num);
        break;
    }
    return 0;
}
