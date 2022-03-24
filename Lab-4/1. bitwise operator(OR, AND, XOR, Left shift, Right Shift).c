#include<stdio.h>
int main()
{
    int a, b, n;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    n=a|b;
    printf("Bitwise OR: %d\n",n);
    n=a&b;
    printf("Bitwise AND: %d\n",n);
    n=a^b;
    printf("Bitwise XOR: %d\n",n);
    n=a<<2;
    printf("Bitwise Left Shift: %d\n",n);
    n=a>>2;
    printf("Bitwise Right Shift: %d",n);
    getch();
    return 0;
}
