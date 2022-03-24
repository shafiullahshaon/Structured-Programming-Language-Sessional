#include<stdio.h>
int main()
{
    int z,y,a,b,x,LCM;
    printf("Enter the value of a and b:");
    scanf("%d%d", &a, &b);
    y=a, z=b;
    while(a!=0)
    {
        x=b%a;
        b=a;
        a=x;
    }
    printf("GCD=%d\n",b);
    LCM=(y*z)/b;
    printf("LCM=%d",LCM);

}
