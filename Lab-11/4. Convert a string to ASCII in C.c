#include<stdio.h>
int main()
{
    int l,i;
    char str[100];
    printf("Enter string: ");
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        printf("%c=%d\n",str[i],str[i]);
    }
    return 0;
}
