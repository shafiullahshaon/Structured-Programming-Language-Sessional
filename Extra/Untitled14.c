#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
        {
            printf(" ");
        }
        for(j=1;j<=(i*2-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i=1;i<=n;i++)
    {
        printf(" ");
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=n*2-i*2-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
