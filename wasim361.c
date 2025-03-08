#include<stdio.h>
#include<string.h>
int Calculate_Length_Of_Given_String(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Length is=%d",Calculate_Length_Of_Given_String(str));
    printf("\n");
    return 0;
}
int Calculate_Length_Of_Given_String(char str[])
{
    int l;
    for(l=0;str[l];l++);
    return l;
}