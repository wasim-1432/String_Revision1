#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    int i,count1=0,count2=0,count3=0;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {
            count1++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            count2++;
        }
        else
        {
            count3++;
        }
    }
    printf("Alphabets is=%d\n",count1);
    printf("Digits is=%d\n",count2);
    printf("Special characters=%d\n",count3);
    printf("\n");
    return 0;
}