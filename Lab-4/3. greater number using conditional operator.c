#include<stdio.h>
int main()
{
    int a, b, n;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    n=(a>b)?a:b;
    printf("The greater number= %d",n);
    getch();
    return 0;
}
