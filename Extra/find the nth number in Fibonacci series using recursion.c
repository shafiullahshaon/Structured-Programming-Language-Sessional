#include <stdio.h>
int fibo(int n);
int main()
{
    int n;
    int r;
    printf("Enter the nth number in fibonacci series: ");
    scanf("%d", &n);
    r=fibo(n);
    printf("The %d number in fibonacci series is %d\n", n, r);
    return 0;
}
int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return (fibo(n - 1) + fibo(n - 2));
    }

}
