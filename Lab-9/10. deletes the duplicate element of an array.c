#include <stdio.h>
int main()
{
    int i, n,j,k;
    printf("How many numbers:\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] == a[j])
            {
                for(k=j;k<n;k++)
    			{
    				a[k]=a[k+1];
				}
                n--;
                j--;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
