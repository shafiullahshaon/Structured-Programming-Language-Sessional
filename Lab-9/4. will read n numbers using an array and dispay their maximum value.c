#include <stdio.h>
int main()
{
    int i,max, n;
    printf("How many numbers:\n");
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
    printf("Maximum number is %d",max);
    return 0;
}
