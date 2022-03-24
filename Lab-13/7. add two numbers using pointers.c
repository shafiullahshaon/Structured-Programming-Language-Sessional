#include<stdio.h>
main()
{
    int *p, *q;
    int x,y,z;
    scanf("%d%d",&x,&y);
    p=&x, q=&y;
    z=*p+*q;
    printf("sum=%d",z);
}
