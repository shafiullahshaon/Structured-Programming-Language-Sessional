#include<stdio.h>
int main()
{
    int i,n,j,p;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        p=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                p=1;
                break;
            }
        }
        if(p==0)
        {
            printf("%d ",i);
        }
    }
}
