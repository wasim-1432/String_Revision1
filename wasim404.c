#include<stdio.h>
#include<string.h>
char *Store_Each_Word_In_Two_Dimensional_Char_Array(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    Store_Each_Word_In_Two_Dimensional_Char_Array(str);
    printf("\n");
    return 0;
}
int Count_Total_Words_In_A_Given_Strings(char str[])
{
    int i,count=1;
    for(i=0;str[i];i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }
    return count;
}
char *Store_Each_Word_In_Two_Dimensional_Char_Array(char str[])
{
    char temp[10][30];
    int i,n,j=-1,k;
    n=Count_Total_Words_In_A_Given_Strings(str);
    for(i=0;i<n;i++)
    {
        k=0;
        for(j++;str[j];j++)
        {
            if(str[j]!=' ')
            {
                temp[i][k]=str[j];
                k++;
            }
            else
            {
                temp[i][k]=' ';
                break;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s",temp[i]);
    }
}