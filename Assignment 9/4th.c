/*Write a C program to check if an array elements are Palindrome or not*/
#include<stdio.h>
int main()
{
    int arr[100];
    int i,j,n,flag=0;
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
    for(i=0,j=n-1;i<j;i++,j--)
    {
        if(arr[i]!=arr[j])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("\nArray elemnts are Palindrome");
    }
    else
    {
        printf("\nArray elemnts are Not Palindrome");
    }
    return 0;
}