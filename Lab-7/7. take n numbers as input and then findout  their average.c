#include<stdio.h>
int main()
{
    int i, n,sum=0,a,avg;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter any values: ");
        scanf("%d",&a);
        sum=sum+a;
    }
    avg=sum/n;
    printf("average=%d",avg);
    return 0;
}
