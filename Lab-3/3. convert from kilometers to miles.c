#include<stdio.h>
int main()
{
    float k, m;
    printf("Enter the value of kilometers: ");
    scanf("%f",&k);
    m=0.62*k;
    printf("%f kilometers= %f miles",k,m);
    getch();
    return 0;
}
