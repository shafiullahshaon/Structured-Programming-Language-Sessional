#include<stdio.h>
int main()
{
    int i, n,sum=0,a,avg,j=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter any values: ");
        scanf("%d",&a);
        if(a>10)
        {
           sum=sum+a;
           j++;
        }
    }
    avg=sum/j;
    printf("average=%d",avg);
    return 0;
}
