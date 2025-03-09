#include<stdio.h>
#include<string.h>
int Find_Character_In_A_Given_String_Return_Index(char str[],int ch);
int main()
{
    char str[30],ch;
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter any character\n");
    scanf("%c",&ch);
    if(Find_Character_In_A_Given_String_Return_Index(str,ch)!=-1)
    {
        printf("Fist occurrence of given character is=%d",Find_Character_In_A_Given_String_Return_Index(str,ch));
    }
    else
    {
        printf("Not Found");
    }
    printf("\n");
    return 0;
}
int Find_Character_In_A_Given_String_Return_Index(char str[],int ch)
{
    int index;
    for(index=0;str[index];index++)
    {
        if(str[index]==ch)
        {
            return index;
            break;
        }
    }
    if(str[index]!=ch)
    {
        return -1;
    }
}