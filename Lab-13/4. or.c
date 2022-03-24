#include <stdio.h>
int fibo(int n);
int main()
{
    int n, i;
    printf("Enter the nth number in fibonacci series: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
        printf("%d\t", fibo(i));
    return 0;
}
int fibo(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2||n==3)
    {
        return 1;
    }
    else
    {
        return (fibo(n - 1) + fibo(n - 2));
    }

}

