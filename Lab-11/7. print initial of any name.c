#include<stdio.h>
int main()
{
    int l,i;
    char str[50];
    printf("Enter any name: ");
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]!=' ')
        {
            printf("%c",str[i]);
        }
        if(str[i]==' ')
        {
            break;
        }
    }
    return 0;
}

