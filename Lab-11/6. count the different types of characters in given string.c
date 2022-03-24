#include<stdio.h>
int main()
{
    int d=0,c=0,sc=0,l,i;
    char str[500];
    printf("Enter string: ");
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
        {
            c++;
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            d++;
        }
        else
        {
            sc++;
        }
    }
    printf("Character is %d\nDigit is %d\nSpecial Character is %d",c,d,sc);
    return 0;
}

