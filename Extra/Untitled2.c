#include<stdio.h>
int main()
{
    int n,i,j;
    char c='a';
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",c);

        }
        printf("\n");
        c++;
    }
}

