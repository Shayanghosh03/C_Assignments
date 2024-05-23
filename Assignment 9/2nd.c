/*Write a C Program to accept n elements of an array
and print the maximum and minimum elements of the array*/
#include<stdio.h>
int main()
{
    int arr[100];
    int i,n,max,min;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    printf("Enter the array elemnts:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("\nMaximum element is %d",max);
    printf("\nMinimum element is %d",min);
    return 0;
}