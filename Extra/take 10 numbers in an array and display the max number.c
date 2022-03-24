#include <stdio.h>
int main()
{
    int i, max=0, a[10];
    printf("Enter 10 numbers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("Maximum number= %d", max);
}

