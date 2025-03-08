#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
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
    printf("Uppercase Alphabet is=%s",str);
    printf("\n");
    return 0;
}