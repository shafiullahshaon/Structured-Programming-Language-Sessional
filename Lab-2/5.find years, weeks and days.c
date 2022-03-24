#include<stdio.h>
int main()
{
    int n, years, weeks, days;
    printf("Enter days: ");
    scanf("%d",&n);
    years=n/365;
    weeks=(n%365)/7;
    days=(n%365)%7;
    printf("%d days= %d years %d weeks and %d days",n,years,weeks,days);
    getch();
    return 0;
}
