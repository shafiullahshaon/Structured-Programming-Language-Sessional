#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i>=51 && i<=69)
        {
            continue;
        }
        if(i>=81 && i<=89)
        {
            continue;
        }
        printf("%d ",i);
        if(i==95)
            break;
    }
    return 0;
}
