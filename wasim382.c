#include<stdio.h>
#include<string.h>
char *Remove_Trim_Spaces_In_A_Given_String(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("%s",Remove_Trim_Spaces_In_A_Given_String(str));
    printf("\n");
    return 0;
}
char *Remove_Trim_Spaces_In_A_Given_String(char str[])
{
    char temp[50];
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]!=' ')
        {
            break;
        }
    }
    if(str[i]!='\0')
    {
        strcpy(temp,str+i);
    }
    for(i=0;temp[i];i++);
    i--;
    while(temp[i]==' ')
    {
        i--;
    }
    temp[i+1]='\0';
    strcpy(str,temp);
    return str;
}