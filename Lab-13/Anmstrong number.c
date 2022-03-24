#include<stdio.h>
int main()
{
    int n, z, x,s=0, i=0;
    printf("Enter a Number\n");
    scanf("%d", &n);
    x=n;
    while(n!=0)
    {
        n=n/10;
        i++;
    }
    x=n;
    while(n!=0)
    {
        z=n%10;
        s=s+pow(z,i);
        n=n/10;
    }
    if(s==x)
        printf("Armstrong number");
    else
        printf("it is not a Armstrong number");
    return 0;
}
