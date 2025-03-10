#include<stdio.h>
#include<string.h>
int Find_Character_In_A_Given_String_Between_Specified_Indices(char str[],int a,int b,char ch);
int main()
{
    char str[30],ch;
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter any character\n");
    scanf("%c",&ch);
    int a,b;
    printf("Enter starting and ending indices\n");
    scanf("%d%d",&a,&b);
    if(Find_Character_In_A_Given_String_Between_Specified_Indices(str,a,b,ch)!=-1)
    {
        printf("Index of given character is=%d",Find_Character_In_A_Given_String_Between_Specified_Indices(str,a,b,ch));
    }
    else
    {
        printf("Not Found");
    }
    printf("\n");
    return 0;
}
int Find_Character_In_A_Given_String_Between_Specified_Indices(char str[],int a,int b,char ch)
{
    int index,l;
    l=strlen(str);
    if(a<0 && b>l)
    {
        return -1;
    }
    else
    {
        for(index=a;index<=b;index++)
        {
            if(str[index]==ch)
            {
                return index;
                break;
            }
        }
        return -1;
    }
}