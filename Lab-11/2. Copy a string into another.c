#include<stdio.h>
int main()
{
    char str[100],str1[100];
    printf("Enter string: ");
    gets(str);
    strcpy(str1,str);
    puts(str1);
    return 0;
}

