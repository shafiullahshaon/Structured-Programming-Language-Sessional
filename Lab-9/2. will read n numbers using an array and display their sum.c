#include <stdio.h>
int main()
{
    int i, s=0, n;
    printf("How many numbers:\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("Summation is %d",s);
    return 0;
}
