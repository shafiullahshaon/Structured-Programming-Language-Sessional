#include<stdio.h>
int main()
{
    int i,sum=0,n;
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("%d ",sum);
    return 0;
}
