#include<stdio.h>
#include<string.h>
void Find_Words_Ending_With_A_Letter_S(char str[][100],int n);
int main()
{
    int n;
    printf("Enter the number of string\n");
    scanf("%d",&n);
    char str[n][100];
    printf("Enter the string\n");
    Find_Words_Ending_With_A_Letter_S(str,n);
    printf("\n");
    return 0;
}
void Find_Words_Ending_With_A_Letter_S(char str[][100],int n)
{
    int i,l,j;
    for(i=0;i<=n;i++)
    {
        fgets(str[i],100,stdin);
        for(l=0;str[i][l];l++);
        str[i][l-1]='\0';
    }
    printf("Reqired Answer is:\n");
    for(i=0;i<=n;i++)
    {
        for(j=0;str[i][j];j++);
        if(str[i][j-1]=='s')
        {
            printf(str[i]);
            printf("\n");
        }
    }
}