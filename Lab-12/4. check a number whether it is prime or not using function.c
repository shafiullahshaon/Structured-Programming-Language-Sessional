#include<stdio.h>
int prime();
int main()
{
    int p;
    p=prime();
    if(p==1)
    {
        printf("prime number");
    }
    else
    {
        printf("Not prime number");
    }
    return 0;
}
int prime()
{
    int i,n,p=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            p=0;
            break;
        }
    }
    return p;
}
