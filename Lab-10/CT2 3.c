#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<50;i++)
    {
        if(i%3==0 && i%4==0)
        {
            printf("%d\n",i);
        }
        if(i>45)
        {
            break;
        }
    }
}
