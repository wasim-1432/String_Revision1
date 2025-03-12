#include<stdio.h>
#include<string.h>
char *Swap_Of_Given_Two_Character(char str[],int a,int b);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    int a,b;
    printf("Enter any two indeces\n");
    scanf("%d%d",&a,&b);
    printf("Required Answer is=%s",Swap_Of_Given_Two_Character(str,a,b));
    printf("\n");
    return 0;
}
char *Swap_Of_Given_Two_Character(char str[],int a,int b)
{
    int i;
    char temp;
    temp=str[a];
    str[a]=str[b];
    str[b]=temp;
    return str;
}