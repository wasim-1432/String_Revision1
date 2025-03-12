#include<stdio.h>
#include<string.h>
int Check_Whether_A_Given_String_Is_Alphanumeric_Or_Not(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    if(Check_Whether_A_Given_String_Is_Alphanumeric_Or_Not(str))
    {
        printf("Alphanumeric String");
    }
    else
    {
        printf("Not Alphanumeric String");
    }
    printf("\n");
    return 0;
}
int Check_Whether_A_Given_String_Is_Alphanumeric_Or_Not(char str[])
{
    int IsAlpha=0,IsDigit=0,i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {
            IsAlpha=1;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            IsDigit=1;
        }
    }
    if(IsAlpha && IsDigit)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}