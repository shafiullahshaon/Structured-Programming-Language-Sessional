#include <stdio.h>
int main()
{
    int base, height;
    float area;
    printf("Enter base of the triangle: ");
    scanf("%d",&base);
    printf("Enter height of the triangle: ");
    scanf("%d",&height);
    area=(base*height)/2;
    printf("Area of the triangle = %f",area);
    getch();
    return 0;
}
