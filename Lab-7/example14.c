#include<stdio.h>
int main()
{
    int  n;
    float i,sum=0.0;
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        sum=sum+i/(i+1);
        i++;
    }
    printf("%f ",sum);
    return 0;
}

