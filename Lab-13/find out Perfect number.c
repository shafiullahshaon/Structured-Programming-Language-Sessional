#include<stdio.h>
int main()
{
    int n, s=0, i;
    printf("Enter a Number\n");
    scanf("%d", &n);
    for(i=1;i<=n-1;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    if(s==n)
        printf("Entered Number is perfect number");
    else
        printf("Entered Number is not a perfect number");
    return 0;
}
