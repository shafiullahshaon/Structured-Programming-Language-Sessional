#include<stdio.h>
int main()
{
    int v=0,c=0,d=0,l,i;
    char str[500];
    printf("Enter string: ");
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
        {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            {
                v++;
            }
            else
            {
                c++;
            }
        }
        if(str[i]>='0'&&str[i]<='9')
        {
            d++;
        }
    }
    printf("Vowel is %d\nConsonant is %d\nDigit is %d",v,c,d);
    return 0;
}
