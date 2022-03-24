#include<stdio.h>
void callbyreferene(int *x,int *y);
main()
{
    int a,b;
    callbyreferene(&a,&b);
    printf("summation=%d",a+b);
}
void callbyreferene(int *x,int *y)
{
    printf("Enter two values: ");
    scanf("%d%d",&*x,&*y);
}
