#include<stdio.h>
int main()
{
    int  n,i,sum=0;
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        sum=sum+pow(i,i);
        i++;
    }
    printf("%d ",sum);
    return 0;
}


