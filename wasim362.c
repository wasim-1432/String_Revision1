#include<stdio.h>
#include<string.h>
int Reverse_Of_A_Given_String(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    Reverse_Of_A_Given_String(str);
    printf("\n");
    return 0;
}
int Reverse_Of_A_Given_String(char str[])
{
    int i,l;
    for(l=0;str[l];l++);
    for(i=0;i<l/2;i++)
    {
        char temp;
        temp=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=temp;
    }
    printf(str);
}