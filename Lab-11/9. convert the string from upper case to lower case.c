#include<stdio.h>
int main()
{
    int l,i;
    char str[50];
    printf("Enter Upper case string: ");
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        printf("%c",str[i]+32);
    }
    return 0;
}

