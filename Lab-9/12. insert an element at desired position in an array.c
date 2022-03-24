#include <stdio.h>
int main()
{
    int i, n,j,k,p;
    printf("How many numbers:\n");
    scanf("%d",&n);
    int a[n+1];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter location of the element to be inserted: ");
    scanf("%d",&p);
    for(i=n+1;i>p-1;i--)
    {
        a[i]=a[i-1];
    }
    printf("Enter any integer number: ");
    scanf("%d",&a[p-1]);
    for(i=0;i<n+1;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
