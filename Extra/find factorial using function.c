#include<stdio.h>
int fac();
int main()
{
    int f;
    f=fac();
    printf("%d",f);
    return 0;
}
int fac()
{
    int m=1,n,i;
    printf("Enter any integer number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        m=m*i;
    }

    return m;
}
