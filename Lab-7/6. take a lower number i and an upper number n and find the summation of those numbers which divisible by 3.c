#include<stdio.h>
int main()
{
    int i,n, sum=0;
    printf("Enter the lower bound(i): ");
    scanf("%d",&i);
    printf("Enter the upper bound(n): ");
    scanf("%d",&n);
    for(i;i<=n;i++)
    {
        if(i%3==0)
        {
            sum=sum+i;
        }

    }
    printf("%d ",sum);
    return 0;
}

