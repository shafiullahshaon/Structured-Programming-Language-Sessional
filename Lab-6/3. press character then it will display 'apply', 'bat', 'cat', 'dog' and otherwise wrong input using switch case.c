#include<stdio.h>
int main()
{
    char n;
    printf("Enter a character: ");
    scanf("%c",&n);
    switch(n)
    {
    case 'a':
        printf("Apple");
        break;
    case 'b':
        printf("Bat");
        break;
    case 'c':
        printf("Cat");
        break;
    case 'd':
        printf("Dog");
        break;
    default:
        printf("Wrong input");
    }
    return 0;
}
