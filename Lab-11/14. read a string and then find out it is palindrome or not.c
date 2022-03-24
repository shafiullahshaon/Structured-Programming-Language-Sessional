#include<stdio.h>
int main()
{
    char str[100],str1[100];
    int m;
    gets(str);
    strcpy(str1,str);
    strrev(str);
    m=strcmp(str,str1);
    if(m==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a palindrome");
    }
    return 0;
}
