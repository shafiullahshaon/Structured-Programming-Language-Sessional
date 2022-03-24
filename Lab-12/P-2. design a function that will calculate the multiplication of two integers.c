#include<stdio.h>
int multi();
int main()
{
    int m;
    m=multi();
    printf("Multiplication of two integers=%d", m);
    return 0;
}
int multi()
{
    int x,y,z;
    printf("Enter the value of two integers: ");
    scanf("%d%d",&x,&y);
    z=x*y;
    return z;
}

