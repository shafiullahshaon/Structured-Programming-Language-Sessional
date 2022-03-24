#include<stdio.h>
int main()
{
    int id, hours, amount;
    printf("Enter your ID: ");
    scanf("%d",&id);
    printf("Enter your total worked hours of a month: ");
    scanf("%d",&hours);
    printf("Enter your salary per hour: ");
    scanf("%d",&amount);
    printf("Your id is %d \nYour total salary of a month: %d",id,amount*hours);
    getch();
    return 0;
}
