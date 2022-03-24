#include <stdio.h>
int main()
{
    int n,r,sum=0,m;
    printf("Input a number: ");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
         r=n % 10;
         n=n/10;
         sum=sum*10+r;
    }
    if(m==sum)
         printf("%d is a palindrome number.\n",m);
    else
         printf("%d is not a palindrome number.\n",m);

}
