#include<stdio.h>
int prime(int n, int i);
main()
{
    int n, p;
    printf("Enter a number: ");
    scanf("%d", &n);
    p=prime(n,n/2);
    if(p==1)
    {
        printf("This is a prime a number");
    }
    else
    {
        printf("This is not a prime number");
    }
}
int prime(int n, int i)
{
    if(i==1)
    {
        return 1;
    }
    else
    {
        if(n%i==0)
        {
            return 0;
        }
        else
        {
            return prime(n,i-1);
        }
    }
}

