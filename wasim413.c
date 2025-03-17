#include<stdio.h>
#include<string.h>
char Return_The_Most_Repeating_Character_In_A_List_Of_String(char str[][20],int n);
int main()
{
    int n;
    printf("Enter the number of strings\n");
    scanf("%d",&n);
    char str[n][20];
    printf("Most Repeating Character is=%c",Return_The_Most_Repeating_Character_In_A_List_Of_String(str,n));
    printf("\n");
    return 0;
}
char *Sort_Of_Given_String(char str[])
{
    int round,i,size;
    char temp;
    size=strlen(str);
    for(round=1;round<=size-1;round++)
    {
        for(i=0;i<=size-round-1;i++)
        {
            if(str[i]>str[i+1])
            {
                temp=str[i];
                str[i]=str[i+1];
                str[i+1]=temp;
            }
        }
    }
    return str;
}
char Return_The_Most_Repeating_Character_In_A_List_Of_String(char str[][20],int n)
{
    int i,l,count=1,Maxcount=0;
    char temp[50],Maxrepeatingchar;
    for(i=0;i<=n;i++)
    {
        fgets(str[i],20,stdin);
        for(l=0;str[i][l];l++);
        str[i][l-1]='\0';
    }
    strcpy(temp,str[0]);
    for(i=1;i<=n;i++)
    {
        strcat(temp,str[i]);
    }
    Sort_Of_Given_String(temp);
    for(i=0;temp[i];i++)
    {
        if(temp[i]==temp[i+1])
        {
            count++;
            continue;
        }
        else
        {
            if(Maxcount<=count)
            {
                Maxcount=count;
                Maxrepeatingchar=temp[i];
            }
            count=1;
        }
    }
    return Maxrepeatingchar;
}