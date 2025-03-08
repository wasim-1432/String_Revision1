#include<stdio.h>
#include<string.h>
int main()
{
    char str[30],temp[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    int i;
    for(i=0;str[i];i++)
    {
        temp[i]=str[i];
    }
    temp[i]='\0';
    printf(temp);
    printf("\n");
    return 0;
}