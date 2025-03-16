#include<stdio.h>
#include<string.h>
char *Make_Acronym_Name_In_A_Given_Name(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("%s",Make_Acronym_Name_In_A_Given_Name(str));
    printf("\n");
    return 0;
}
int Count_WOrds_In_A_Given_Name(char str[])
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
char *Make_Acronym_Name_In_A_Given_Name(char str[])
{
    char temp[100];
    int i,j=1,n,k=0;
    n=Count_WOrds_In_A_Given_Name(str);
    if(str[0]>='a' && str[0]<='z')
    {
        temp[0]=str[0]-32;
    }
    else
    {
        temp[0]=str[0];
    }
    for(i=1;str[i];i++)
    {
        if(str[i-1]==' ')
        {
            j++;
            if(j==n)
            {
                if(str[i]>='a' && str[i]<='z')
                {
                    k++;
                    temp[k]=' ';
                    k++;
                    temp[k]=str[i]-32;
                }
                else
                {
                    k++;
                    temp[k]=' ';
                    k++;
                    temp[k]=str[i];
                }
                for(i++,k++;str[i];i++,k++)
                {
                    temp[k]=str[i];
                }
                temp[k]='\0';
            }
            else
            {
                if(str[i]>='a' && str[i]<='z')
                {
                    k++;
                    temp[k]=' ';
                    k++;
                    temp[k]=str[i]-32;
                }
                else
                {
                    k++;
                    temp[k]=' ';
                    k++;
                    temp[k]=str[i];
                }
            }
        }
    }
    strcpy(str,temp);
    return str;
}