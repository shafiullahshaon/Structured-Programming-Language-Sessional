#include <stdio.h>
int main()
{
    int i,s,l, n;
    printf("How many numbers:\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=a[0];
    for(i=0;i<n;i++)
    {
        if(l<a[i])
        {
            l=a[i];
        }
    }
    s=a[0];
    for(i=0;i<n;i++)
    {
        if(s>a[i])
        {
            s=a[i];
        }
    }
    printf("Largest number is %d and smallest number is %d",l,s);
    return 0;
}
