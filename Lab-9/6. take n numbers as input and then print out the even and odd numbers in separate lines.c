#include <stdio.h>
int main()
{
    int i, n;
    printf("How many numbers:\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Even numbers: ");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d ",a[i]);
        }
    }
    printf("\nOdd numbers: ");
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}
