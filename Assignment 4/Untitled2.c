/*Write a C program for grading the students in
an Academic Institution*/
#include<stdio.h>
int main()
{
    int mar;
    printf("Enter the marks between o to 100: ");
    scanf("%d",&mar);
    if(mar>100)
    {
        printf("\nPlease enter the marks between limit!!!\n");
    }
    else
    {
        switch(mar/10)
        {
        case 9:
            printf("\nYour Grade is: O");
            break;
        case 8:
            printf("\nYour Grade is: E");
            break;
        case 7:
            printf("\nYour Grade is: A");
            break;
        case 6:
            printf("\nYour Grade is: B");
            break;
        case 5:
            printf("\nYour Grade is: C");
            break;
        case 4:
            printf("\nYour Grade is: D");
            break;
        default :
            printf("\nYour Grade is: F");
        }
    }
    return 0;
}
