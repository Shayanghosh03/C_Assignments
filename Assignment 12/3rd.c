#include <stdio.h>
int main()
{
 char str[100],revStr[100];
 int i,j=0,len;
 printf("Enter a string: ");
 fgets(str, sizeof(str), stdin);
 for(i=0;str[i]!='\0';i++)
    {
        len=i; 
    }
 for(i=len-1; i>=0;i--)
    {
        revStr[j]=str[i];
        j++;
    }
 revStr[j]='\0';
 printf("\nOriginal String is: %s",str);
 printf("\nReversed String is: %s",revStr);
 return 0;
}
