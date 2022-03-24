#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("++a= %d\n", ++a);
    printf("a++= %d\n", a++);
    printf("--a= %d\n", --a);
    printf("a--= %d", a--);
    getch();
    return 0;
}
