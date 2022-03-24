#include<stdio.h>
int main()
{
    int i,n,p=1;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            p=0;
            break;
        }
    }
    if(p==1)
    {
        printf("prime number");
    }
    else
    {
        printf("Not prime number");
    }
    return 0;
}
