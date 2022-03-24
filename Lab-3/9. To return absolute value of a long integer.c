#include<stdio.h>
int main()
{
    long int n,m;
    printf("Enter any integer number: ");
    scanf("%d", &n);
    m=abs(n);
    printf("The absolute value is %d",m);
    getch();
    return 0;
}
