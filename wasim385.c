#include<stdio.h>
#include<string.h>
int Case_Incensitive_Comparision_Of_Two_Strings(char str[],char str1[]);
int main()
{
    char str[30],str1[30];
    printf("Enter first string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter second string\n");
    fgets(str1,30,stdin);
    str1[strlen(str1)-1]='\0';
    if(Case_Incensitive_Comparision_Of_Two_Strings(str,str1))
    {
        printf("Same String");
    }
    else
    {
        printf("Not Same String");
    }
    printf("\0");
    return 0;
}
int Case_Incensitive_Comparision_Of_Two_Strings(char str[],char str1[])
{
    int i,j=-1;
    for(i=0;str[i];i++)
    {
        for(j++;str1[j];j++)
        {
            if(str[i]==str1[j])
            {
                return 1;
                break;
            }
            if(str[i]==str1[j]-32)
            {
                return 1;
                break;
            }
            if(str[i]==str1[j]+32)
            {
                return 1;
                break;
            }
            else
            {
                return 0;
            }
        }
    }
}