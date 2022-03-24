#include<stdio.h>
int sum(int x);
main()
{
    int n, p;
    printf("Enter n: ");
    scanf("%d", &n);
    p=sum(n);
    printf("%d",p);
}
int sum(int x)
{
    if(x<=1)
    {
        return 1;
    }
    else
    {
        return x+sum(x-1);
    }
}

