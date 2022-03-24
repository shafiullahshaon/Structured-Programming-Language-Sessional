#include<stdio.h>
int main()
{
    int a,b;
    char n;
    printf("Enter an operator(+,-,*,/): ");
    scanf("%c", &n);
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    switch(n)
    {
    case '+':
        printf("Addition of a and b= %d",a+b);
        break;
    case '-':
        printf("Subtraction of a and b= %d",a-b);
        break;
    case '*':
        printf("Multiplication of a and b= %d",a*b);
        break;
    case '/':
        if(b==0)
        {
            printf("Division is not possible");
        }
        else
        {
            printf("Division of a and b= %d",a/b);
        }
        break;
    default:
        printf("Wrong input");
    }
    return 0;
}
