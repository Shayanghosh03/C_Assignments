/*Write a C program to check a character is Vowel or not.*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Character: ");
    scanf("%c",&ch);
    if(ch=='A' || ch=='a' || ch=='E' || ch=='e' ||ch=='I' || ch=='i' ||ch=='O' || ch=='o' ||ch=='U' || ch=='u')
    {
        printf("\n%c is Vowel",ch);
    }
    else
    {
        printf("\n%c is not Vowel",ch);
    }
    return 0;
}
