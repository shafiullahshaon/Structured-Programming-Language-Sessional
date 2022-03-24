#include <stdio.h>
int main()
{
    int i, n,j,k,p;
    printf("How many numbers:\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter location of the element to be deleted: ");
    scanf("%d",&p);
    for(k=p-1;k<n;k++)
    {
        a[k]=a[k+1];
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

