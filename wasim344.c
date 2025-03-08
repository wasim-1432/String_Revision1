#include<stdio.h>
#include<string.h>
int main()
{
    char str[30],V[]="AEIOUaeiou";
    int i,j,count=0;
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    for(i=0;str[i];i++)
    {
        for(j=0;V[j];j++)
        {
            if(str[i]==V[j])
            {
                count++;
            }
        }
    }
    printf("Total Vowels in a given string=%d",count);
    printf("\n");
    return 0;
}