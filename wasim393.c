#include<stdio.h>
#include<string.h>
char *Convert_First_Character_Of_String_In_Capital_Form(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Required Answer is=%s",Convert_First_Character_Of_String_In_Capital_Form(str));
    printf("\n");
    return 0;
}
char *Convert_First_Character_Of_String_In_Capital_Form(char str[])
{
    int i;
    if(str[0]>='a' && str[0]<='z')
    {
        str[0]=str[0]-32;
    }
    for(i=1;str[i];i++)
    {
        if(str[i]==' ')
        {
            i++;
            if(str[i]>='a' && str[i]<='z')
            {
                str[i]=str[i]-32;
            }
        }
    }
    return str;
}