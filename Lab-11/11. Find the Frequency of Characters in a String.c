#include<stdio.h>
int main()
{
    int l,i,f=0;
    char ch, str[50];
    printf("Enter any string: ");
    gets(str);
    l=strlen(str);
    printf("Enter a character to find the frequency: ");
    scanf("%c",&ch);
    for(i = 0; i<l;i++)
    {
       if(ch == str[i])
           {
               f++;
           }
    }
    printf("Frequency of %c = %d", ch, f);

    return 0;
}

