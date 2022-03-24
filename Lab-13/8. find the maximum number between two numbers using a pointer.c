#include<stdio.h>
main()
{
    int *p, *q;
    int x,y;
    scanf("%d%d",&x,&y);
    p=&x, q=&y;
    if(*p>*q)
    {
        printf("maximum number is %d",*p);
    }
    else
    {
         printf("maximum number is %d",*q);
    }
}

