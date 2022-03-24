#include<stdio.h>
int main()
{
    int  n;
    float i,sum=0.0;
    scanf("%d",&n);
    i=1;
    do
    {
        sum=sum+i/(i+1);
        i++;
    }
    while(i<=n);
    printf("%f ",sum);
    return 0;
}
