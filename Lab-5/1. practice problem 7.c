//find out leap year or not
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any year: ");
    scanf("%d",&n);
    if(n%400==0 || n%100!=0 && n%4==0)
    {
        printf("This is a leap year");
    }
    else
    {
        printf("This is not a leap year");
    }
    return 0;
}
