#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the value of dividend: ");
    scanf("%d",&a);
    printf("Enter the value of divisor: ");
    scanf("%d",&b);
    c=a/b;
    d=a%b;
    printf("The value of quotient is %d\n", c);
    printf("The value of remainder is %d", d);
    getch();
    return 0;
}
