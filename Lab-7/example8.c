#include<stdio.h>
int main()
{
    int  n;
    float i,sum=0.0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(i*i)/((i+1)*(i+1));
    }
    printf("%f ",sum);
    return 0;
}
