#include<stdio.h>
#include<string.h>
char Remove_Duplicates_Names_Stored_In_The_List(char str[10][100]);
int main()
{
    char str[10][100];
    printf("Enter any 10 city names\n");
    Remove_Duplicates_Names_Stored_In_The_List(str);
    printf("\n");
    return 0;
}
char Remove_Duplicates_Names_Stored_In_The_List(char str[10][100])
{
    int i,l;
    for(i=0;i<10;i++)
    {
        fgets(str[i],100,stdin);
        for(l=0;str[i][l];l++);
        str[i][l-1]='\0';
    }
    int round;
    char temp[100];
    for(round=1;round<=10-1;round++)
    {
        for(i=0;i<=10-round-1;i++)
        {
            if(strcmp(str[i],str[i+1])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[i+1]);
                strcpy(str[i+1],temp);
            }
        }
    }
    printf("\nRequired Answer is:\n");
    for(i=0;i<10;i++)
    {
        if(i==0 || strcmp(str[i],str[i+1])!=0)
        {
            printf("%s\n",str[i]);
        }
    }
}