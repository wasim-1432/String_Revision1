#include<stdio.h>
#include<string.h>
int Count_Vowels_In_A_Given_String(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Total Vowels in a given string=%d",Count_Vowels_In_A_Given_String(str));
    printf("\n");
    return 0;
}
int Count_Vowels_In_A_Given_String(char str[])
{
    int i,j,count=0;
    char V[]="aeiouAEIOU";
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
    return count;
}