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
    else if(a<0)
    {
        printf("Negative number");
    }
    else
    {
        printf("Neutral number");
    }
    return 0;
}

