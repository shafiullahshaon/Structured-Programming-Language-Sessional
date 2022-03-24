#include <stdio.h>
int main()
{
    float rad, PI=3.1416;
    printf("Enter radius of circle: ");
    scanf("%f",&rad);
    printf("Perimeter of circle: %f",2*PI*rad);
    getch();
    return 0;
}
