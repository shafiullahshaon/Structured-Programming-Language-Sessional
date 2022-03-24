#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first angle of a triangle: ");
    scanf("%d",&a);
    printf("Enter second angle of a triangle: ");
    scanf("%d",&b);
    c=180-a-b;
    printf("The third angle of a triangle is %d",c);
    getch();
    return 0;
}
