#include<stdio.h>
int main()
{
    int hour, minute, total;
    printf("Enter hours: ");
    scanf("%d",&hour);
    printf("Enter minutes: ");
    scanf("%d",&minute);
    total=hour*60+minute;
    printf("%d hours+ %d minutes= %d minutes",hour, minute, total);
    getch();
    return 0;
}
