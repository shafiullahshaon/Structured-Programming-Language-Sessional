#include<stdio.h>
int main()
{
    int l,i,j=0;
    char str[500],str1[500];
    printf("Enter string: ");
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {

            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            {
                str1[j]=str[i];
                j++;
            }
    }
    for(i=0;i<j;i++)
        printf("%c",str1[i]);
    return 0;
}
