#include<stdio.h>
int main()
{
    char i;
    for(i='a';i<='z';i++)
    {
        if(i>='e' && i<='l')
        {
            continue;
        }
        printf("%c ",i);
        if(i=='p')
            break;
    }
    return 0;
}

