#include<stdio.h>
#include<string.h>
int Check_Whether_A_Given_String_Is_Palindrome_Or_Not(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    if(Check_Whether_A_Given_String_Is_Palindrome_Or_Not(str))
    {
        printf("Palindrome string");
    }
    else
    {
        printf("Not Palindrome string");
    }
    printf("\n");
    return 0;
}
int Check_Whether_A_Given_String_Is_Palindrome_Or_Not(char str[])
{
    int i,l;
    l=strlen(str);
    for(i=0;i<l/2;i++)
    {
        if(str[i]==str[l-i-1])
        {
            return 1;
        }
        else if(str[i]!=str[l-i-1])
        {
            return 0;
            break;
        }
    }
}