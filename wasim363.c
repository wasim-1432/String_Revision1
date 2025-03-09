#include<stdio.h>
#include<string.h>
int Compare_Two_Strings(char str[],char str1[]);
int main()
{
    char str[20],str1[20];
    printf("Enter first string\n");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter any second string\n");
    fgets(str1,20,stdin);
    str1[strlen(str1)-1]='\0';
    if(Compare_Two_Strings(str,str1)==0)
    {
        printf("Same String");
    }
    else if(Compare_Two_Strings(str,str1)==1)
    {
        printf("First String is bigger\n");
    }
    else
    {
        printf("Second String is bigger\n");
    }
    printf("\n");
    return 0;
}
int Compare_Two_Strings(char str[],char str1[])
{
    return strcmp(str,str1);
}