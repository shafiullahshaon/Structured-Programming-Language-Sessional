#include<stdio.h>
int main()
{
    int s=0,c=0,ft=0,l,i;
    char str[500];
    printf("Enter string: ");
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]==' ')
        {
            s++;
        }
        if(str[i]==',')
        {
            c++;
        }
        if(str[i]=='.')
        {
            ft++;
        }
    }
    printf("Space is %d\nComma is %d\nFull-stop is %d",s,c,ft);
    return 0;
}
