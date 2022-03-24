#include<stdio.h>
int max();
int main()
{
    int m;
    m=max();
    printf("Maximum number is %d",m);
    return 0;
}
int max()
{
    int i,max, n;
    printf("How many numbers: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    return max;
}
