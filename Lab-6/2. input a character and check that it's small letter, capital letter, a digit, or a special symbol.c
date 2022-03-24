#include<stdio.h>
int main()
{
    char n;
    printf("Enter a character: ");
    scanf("%c",&n);
    if(n>='a' && n<='z')
    {
        printf("Small letter");
    }
    else if(n>='A' && n<='Z')
    {
        printf("Capital letter");
    }
    else if(n>='0' && n<='9')
    {
        printf("Digit");
    }
    else
    {
        printf("Special symbol");
    }
    return 0;
}
