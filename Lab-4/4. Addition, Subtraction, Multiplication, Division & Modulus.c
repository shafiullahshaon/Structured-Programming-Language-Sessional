#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Addition of a and b: %d\n",a+b);
    printf("Subtraction of a and b: %d\n",a-b);
    printf("Multiplication of a and b: %d\n",a*b);
    printf("Division of a and b: %d\n",a/b);
    printf("Modulus of a and b: %d",a%b);
    getch();
    return 0;
}
