#include<stdio.h>
int main()
{
    int a,b,c;
    float d;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);
    d=(a+b+c)/3;
    printf("Average is = %f",d);
    getch();
    return 0;
}
