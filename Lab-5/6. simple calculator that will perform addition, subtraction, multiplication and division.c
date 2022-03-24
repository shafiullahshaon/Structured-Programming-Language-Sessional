#include<stdio.h>
int main()
{
    int a,b, n, m;
    printf("Calculator...\n");
    printf("\t 1.   Addition\n");
    printf("\t 2.   Subtraction\n");
    printf("\t 3.   Multiplication\n");
    printf("\t 4.   Division\n");
    printf("Enter option: ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Enter the value of a: ");
        scanf("%d",&a);
        printf("Enter the value of b: ");
        scanf("%d",&b);
        m=a+b;
        printf("Addition between a and b= %d",m);
    }
    else if(n==2)
    {
        printf("Enter the value of a: ");
        scanf("%d",&a);
        printf("Enter the value of b: ");
        scanf("%d",&b);
        m=a-b;
        printf("Subtraction between a and b= %d",m);
    }
    else if(n==3)
    {
        printf("Enter the value of a: ");
        scanf("%d",&a);
        printf("Enter the value of b: ");
        scanf("%d",&b);
        m=a*b;
        printf("Multiplication between a and b= %d",m);
    }
    else
    {
        printf("Enter the value of a: ");
        scanf("%d",&a);
        printf("Enter the value of b: ");
        scanf("%d",&b);
        m=a/b;
        printf("Division between a and b= %d",m);
    }
    return 0;
}
