#include<stdio.h>
int main()
{
    float c, f;
    printf("Enter the value of Centigrade: ");
    scanf("%f",&c);
    f=(9*c+160)/5;
    printf("%f degree Centigrade= %f degree Fahrenheit",c,f);
    getch();
    return 0;
}
