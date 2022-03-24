#include<stdio.h>
int multi(int x, int y);
int main()
{
    int m,a,b;
    printf("Enter the value of two integers: ");
    scanf("%d%d",&a,&b);
    m=multi(a,b);
    printf("Multiplication of two integers=%d", m);
    return 0;
}
int multi(int x,int y)
{
    int z;
    z=x*y;
    return z;
}
