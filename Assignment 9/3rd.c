/*Write a C Programming to accept n elemnts of
an array and reverse the elemnts on the same array
and print the resultant array*/
#include<stdio.h>
int main()
{
    int arr[100];
    int i,n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nReverse of an array elemnts are:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}