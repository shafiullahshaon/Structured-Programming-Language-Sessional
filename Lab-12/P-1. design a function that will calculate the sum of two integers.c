#include<stdio.h>
int sum();
int main()
{
    int s;
    s=sum();
    printf("summation of two integers=%d", s);
    return 0;
}
int sum()
{
    int x,y,z;
    printf("Enter the value of two integers: ");
    scanf("%d%d",&x,&y);
    z=x+y;
    return z;
}
