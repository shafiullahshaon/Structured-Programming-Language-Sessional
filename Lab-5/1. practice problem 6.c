//find out odd or even number

#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("This is even number");
    }
    else
    {
        printf("This is odd number");
    }
    return 0;
}
