#include<stdio.h>
int main()
{
    char str[100],str1[100];
    printf("Enter string1: ");
    gets(str);
    printf("Enter string2: ");
    gets(str1);
    strcat(str,str1);
    puts(str);
    return 0;
}


