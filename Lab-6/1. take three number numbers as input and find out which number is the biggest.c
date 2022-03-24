#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("a is the biggest number");
        }
        else
        {
            printf("c is the biggest number");
        }
    }
    else
    {
        if(b>c)
        {
            printf("b is the biggest number");
        }
        else
        {
            printf("c is the biggest number");
        }
    }
    return 0;
}
