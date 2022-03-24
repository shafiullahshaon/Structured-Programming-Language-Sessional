#include<stdio.h>
#include<string.h>
int main()
{
    int l;
    char str[100];
    printf("Enter string: ");
    gets(str);
    l=strlen(str);
    printf("length=%d",l);
    return 0;
}
