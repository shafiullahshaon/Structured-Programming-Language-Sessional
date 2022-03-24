#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);
    strrev(str);
    puts(str);
    return 0;
}
