#include<stdio.h>
int fact(int n);
int main()
{
    int npr, n, r;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of r: ");
    scanf("%d",&r);
    npr=fact(n)/fact(n-r);
    printf("nPr=%d",npr);
    return 0;
}
int fact(int n)
{
    int m=1,i;
    for(i=1;i<=n;i++)
    {
        m=m*i;
    }
    return m;
}

