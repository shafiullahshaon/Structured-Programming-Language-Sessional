#include<stdio.h>
int main()
{
    float f, m;
    printf("Enter the value of number in feet: ");
    scanf("%f",&f);
    m=f/3.28;
    printf("%f feet= %f meters",f,m);
    getch();
    return 0;
}
