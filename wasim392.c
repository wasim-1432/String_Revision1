#include<stdio.h>
#include<string.h>
int Find_Word_In_A_Given_String(char str[],char word[]);
int main()
{
    char str[30],word[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter the word\n");
    fgets(word,30,stdin);
    word[strlen(word)-1]='\0';
    if(Find_Word_In_A_Given_String(str,word))
    {
        printf("Found");
    }
    else
    {
        printf("Not Found");
    }
    printf("\n");
    return 0;
}
int Find_Word_In_A_Given_String(char str[],char word[])
{
    int i=-1,j;
    for(j=0;word[j];j++)
    {
        for(i++;str[i];i++)
        {
            if(word[j]==str[i])
            {
                return 1;
                break;
            }
        }
        if(word[j]!=str[i])
        {
            return 0;
            break;
        }
    }
}