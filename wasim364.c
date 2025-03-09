#include<stdio.h>
#include<string.h>
char *Convert_A_String_Into_Uppercase(char str[]);
int main()
{
    char str[20];
    printf("Enter any string\n");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    printf("Uppercase Alphabet is=%s",Convert_A_String_Into_Uppercase(str));
    printf("\n");
    return 0;
}
char *Convert_A_String_Into_Uppercase(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        else
        {
            str[i]=str[i];
        }
    }
    return str;
}