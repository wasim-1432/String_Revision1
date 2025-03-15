#include<stdio.h>
#include<string.h>
char *Reverse_A_Given_String_Into_Word_Wise(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("%s",Reverse_A_Given_String_Into_Word_Wise(str));
    printf("\n");
    return 0;
}
int Count_Word_In_A_Given_String(char str[])
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
char *Reverse_A_Given_String_Into_Word_Wise(char str[])
{
    int i,j=-1,k,n;
    char temp[20][50];
    n=Count_Word_In_A_Given_String(str);
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
                break;
            }
        }
    }
    strcpy(str,temp[n-1]);
    strcat(str," ");
    for(i=n-2;i>0;i--)
    {
        strcat(str,temp[i]);
        strcat(str," ");
    }
    strcat(str,temp[0]);
    strcat(str," ");
    return str;
}