/*Write a C program to search an element whether
it is present or not in the array*/
#include<stdio.h>
int main()
{
    int arr[100];
    int i,n,val,flag=0;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    printf("Enter the array elemnts:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array elemnts are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nPlease enter the searching element: ");
    scanf("%d",&val);
    for(i=0;i<n;i++)
    {
        if(arr[i]==val)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("\n%d is present in the array",val);
    }
    else
    {
        printf("\n%d is not present in the array",val);
    }
    return 0;
}