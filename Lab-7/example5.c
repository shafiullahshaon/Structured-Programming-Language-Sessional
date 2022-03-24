#include<stdio.h>
int main()
{
    int i,sum=0,n;
    scanf("%d",&n);
    if(n%5==0)
    {
        for(i=5;i<=n;i=i+5)
        {
            sum=sum+i;
        }
        printf("%d ",sum);
    }

    return 0;
}
