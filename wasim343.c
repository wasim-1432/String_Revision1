#include<stdio.h>
#include<string.h>
int main()
{
    char str[30],ch;
    int round,i,l,count=0;
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter any character\n");
    scanf("%c",&ch);
    for(l=0;str[l];l++);
    for(round=1;round<=l-1;round++)
    {
        for(i=0;i<=l-round-1;i++)
        {
            if(str[i]>str[i+1])
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
        if(str[i]==ch)
        {
            count++;
        }
    }
    printf("Total occurrence of a given character in a given string=%d",count);
    printf("\n");
    return 0;
}