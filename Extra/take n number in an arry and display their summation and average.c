#include <stdio.h>
int main()
{
    int i, n, sum=0,avg, a[n+1];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&a[i]);
        sum =sum+a[i];
    }
    avg=sum/n;
    printf("Summation=%d and average=%d", sum, avg);
}
