#include<stdio.h>
int main()
{
    int l,l1,i,j,c=0;
    char str1[50], str[100];
    printf("Enter any string: ");
    gets(str);
    l=strlen(str);
    printf("Enter a substring: ");
    gets(str1);
    l1=strlen(str1);
    for(i = 0; i<l;i++)
    {
       if(str1[0]==str[i])
       {
           for(j=0;j<l1;j++)
           {
               if(str1[j]==str[i+j])
                {
                    c++;
                }
                else
                {
                    c=0;
                    break;
                }
           }
       }

    }
    if(c==0)
    {
        printf("Not found");
    }
    else
    {
        printf("found");
    }

    return 0;
}

