#include<stdio.h>
#include<string.h>
int Input_A_String_In_2D_Char_Array(char str[5][20]);
int main()
{
    char str[5][20];
    printf("Total Vowels is=%d",Input_A_String_In_2D_Char_Array(str));
    printf("\n");
    return 0;
}
int Input_A_String_In_2D_Char_Array(char str[5][20])
{
    int i,l,j,k=0,count=0;
    char V[]="aeiouAEIOU";
    for(i=0;i<5;i++)
    {
        fgets(str[i],20,stdin);
        for(l=0;str[i][l];l++);
        str[i][l-1]='\0';
    }
    for(i=0;i<5;i++)
    {
        for(j=0;str[i][j];j++)
        {
            for(k=0;V[k];k++)
            {
                if(str[i][j]==V[k])
                {
                    count++;
                }
            }
        }
    }
    return count;
}