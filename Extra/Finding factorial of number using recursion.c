#include<stdio.h>
int fact(int x);
main()
{
    int n, p;
    printf("Enter n: ");
    scanf("%d", &n);
    p=fact(n);
    printf("%d",p);
}
int fact(int x)
{
    if(x<=1)
    {
        return 1;
    }
    else
    {
        return x*fact(x-1);
    }
}
