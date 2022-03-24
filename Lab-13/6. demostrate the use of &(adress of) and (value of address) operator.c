#include<stdio.h>
main()
{
    int m=7;
    int *x;
    printf("&m=%d\n",&m);
    x=&m;
    printf("x=%d\n",x);
    printf("m=%d\n",m);
    printf("*x=%d",*x);
}

