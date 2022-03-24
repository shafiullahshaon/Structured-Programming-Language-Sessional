//find out bigger number between two numbers

#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    if(a>b)
    {
        printf("a is bigger number");
    }
    else
    {
        printf("b is bigger number");
    }
    return 0;
}
