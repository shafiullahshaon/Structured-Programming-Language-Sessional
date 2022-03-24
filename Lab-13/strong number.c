#include<stdio.h>
int fact(int n);
int main()
{
    int n, z, x,s=0, i;
    printf("Enter a Number\n");
    scanf("%d", &n);
    x=n;
    while(n!=0)
    {
        z=n%10;
        s=s+fact(z);
        n=n/10;
    }
    if(s==x)
        printf("strong number");
    else
        printf("it is not a strong number");
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
