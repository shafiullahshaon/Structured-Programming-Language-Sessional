#include<stdio.h>
int main()
{
    int i,sum=0,n;
    scanf("%d",&n);
    i=1;
    do
    {
        sum=sum+i;
        i++;
    }
    while(i<=n);
    printf("%d ",sum);
    return 0;
}
