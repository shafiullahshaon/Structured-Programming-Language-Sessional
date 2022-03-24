#include <stdio.h>
void fibonacci(int x, int y, int n, int i);

int main()
{
    int x=0,y=1,n,i=1;
    printf("Enter the range of the Fibonacci series: ");
    scanf("%d",&n);
    printf("%d\t%d\t",x,y);
    fibonacci(x,y,n,i);
    return 0;
}
void fibonacci(int x, int y, int n, int i)
{
    int z;
    z=x+y;
    printf("%d\t",z);
    x=y;
    y=z;
    i++;
    if(i<=n-2)
        fibonacci(x,y,n,i);
}
