#include<stdio.h>
#define pi 3.1416
int main()
{
    float v, r;
    printf("Enter the value of radius: ");
    scanf("%f",&r);
    v=(4/3)*pi*r*r*r;
    printf("The volume of a sphere is %f",v);
    getch();
    return 0;
}
