#include <stdio.h>
int main()
{
    int i, n, x,p=0;
    printf("How many numbers:\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Search a number: ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x==a[i])
        {
            printf("Found");
            p=1;
            break;
        }
    }
    if(p==0)
        {
            printf("Not Found");
        }
    return 0;
}

