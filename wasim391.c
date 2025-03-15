#include<stdio.h>
#include<string.h>
int Count_Frequency_Of_Each_Character(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    Count_Frequency_Of_Each_Character(str);
    printf("\n");
    return 0;
}
int Count_Frequency_Of_Each_Character(char str[])
{
    int i,round,n,count=1;
    n=strlen(str);
    for(round=1;round<n;round++)
    {
        for(i=0;i<=n-round-1;i++)
        {
            if(str[i]>=str[i+1])
            {
                char temp;
                temp=str[i];
                str[i]=str[i+1];
                str[i+1]=temp;
            }
        }
    }
    for(i=0;str[i];i++)
    {
        if(str[i]==str[i+1])
        {
            count++;
            continue;
        }
        else
        {
            printf("%c - %d\n",str[i],count);
            count=1;
        }
    }
}