//test a number whether it is negative or positive
#include<stdio.h>
int main()
{
    int a;
    printf("Enter any integer number: ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("Positive number");
    }
    else
    {
        printf("Negative number");
    }
    return 0;
}
