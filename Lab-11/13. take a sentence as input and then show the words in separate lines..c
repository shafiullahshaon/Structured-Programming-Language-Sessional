#include<stdio.h>
int main()
{
    int l,i;
    char str[500];
    printf("Enter string: ");
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
            printf("\n");
        }
    }
    return 0;
}

