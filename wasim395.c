#include<stdio.h>
#include<string.h>
char *Cancatinate_Two_Strings(char str[],char str1[]);
int main()
{
    char str[30];
    printf("Enter first string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    char str1[30];
    printf("Enter any second string\n");
    fgets(str1,30,stdin);
    str1[strlen(str1)-1]='\0';
    printf("\nRequired Answer is: %s",Cancatinate_Two_Strings(str,str1));
    printf("\n");
    return 0;
}
char *Cancatinate_Two_Strings(char str[],char str1[])
{
    char temp[200];
    strcpy(temp,str);
    strcat(temp," ");
    strcat(temp,str1);
    strcpy(str,temp);
    return str;
}