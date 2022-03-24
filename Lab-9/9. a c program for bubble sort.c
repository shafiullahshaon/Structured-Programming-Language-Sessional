#include <stdio.h>
int main()
{
    int i,s, n,j;
    printf("How many numbers:\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]>a[i+1])
            {
                s=a[i];
                a[i]=a[i+1];
                a[i+1]=s;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

