#include<stdio.h>
int fact(int n);
int main()
{
    int ncr, n, r;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of r: ");
    scanf("%d",&r);
    ncr=fact(n)/(fact(n-r)*fact(r));
    printf("nCr=%d",ncr);
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
