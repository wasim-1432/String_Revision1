#include<stdio.h>
#include<string.h>
void Input_String_In_2D_Char_Array(char str[][20],int n);
int main()
{
    int n;
    printf("Enter the number of strings\n");
    scanf("%d",&n);
    char str[n][20];
    Input_String_In_2D_Char_Array(str,n);
    printf("\n");
    return 0;
}
void Input_String_In_2D_Char_Array(char str[][20],int n)
{
    int i,l;
    printf("Enter any string\n");
    for(i=0;i<=n;i++)
    {
        fgets(str[i],20,stdin);
        for(l=0;str[i][l];l++);
        str[i][l-1]='\0';
    }
    for(i=1;i<=n;i++)
    {
        printf("%s ",str[i]);
    }
}