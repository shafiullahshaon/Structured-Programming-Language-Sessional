#include<stdio.h>
int fact();
int main()
{
    int f;
    f=fact();
    printf("%d",f);
    return 0;
}
int fact()
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
