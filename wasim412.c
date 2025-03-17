#include<stdio.h>
#include<string.h>
void Find_WOrds_Ending_WIth_Letter_S(char str[]);
int main()
{
    char str[100];
    printf("Enter any string\n");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    Find_WOrds_Ending_WIth_Letter_S(str);
    printf("\n");
    return 0;
}
int Count_Words_In_A_Given_String(char str[])
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
void Find_WOrds_Ending_WIth_Letter_S(char str[])
{
    char temp[100][100];
    int i,j=-1,n,k;
    n=Count_Words_In_A_Given_String(str);
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
        if(str[j]=='\0')
        {
            break;
        }
    }
    temp[i][k]='\0';
    printf("\nRequired Answer is:\n");
    for(i=0;i<n;i++)
    {
        for(k=0;temp[i][k];k++)
        {
            if(temp[i][k]=='s')
            {
                printf("%s\n",temp[i]);
            }
        }
    }
}