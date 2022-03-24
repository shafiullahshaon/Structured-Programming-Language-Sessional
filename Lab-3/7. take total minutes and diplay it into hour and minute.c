#include<stdio.h>
int main()
{
    int hour, minute, total;
    printf("Enter total minutes: ");
    scanf("%d",&total);
    hour= total/60;
    minute=total%60;
    printf("%d minutes= %d hours & %d minutes",total, hour, minute);
    getch();
    return 0;
}

