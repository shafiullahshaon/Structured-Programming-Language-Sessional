#include<stdio.h>
void callbyreferene(int *x,int *y);
main()
{
    int a,b;
    printf("Enter two values: ");
    scanf("%d%d",&a,&b);
    printf("a=%d b=%d\n", a,b);
    callbyreferene(&a,&b);
    printf("After swapping\na=%d b=%d", a,b);
}
void callbyreferene(int *x,int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
}

