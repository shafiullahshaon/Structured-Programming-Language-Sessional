#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=50;i++)
    {
        if(i>=5 && i<=10)
        {
            continue;
        }
        printf("%d ",i);
        if(i==15)
            break;
    }
    return 0;
}
