#include <stdio.h>
int main()
{
    int t;
    printf("Input days temperature : ");
    scanf("%d",&t);
   if(t<0)
   {
       printf("Freezing weather.\n");
   }
   else if(t<10)
   {
       printf("Very cold weather.\n");
   }
    else if(t<20)
    {
        printf("Cold weather.\n");
    }
    else if(t<30)
    {
        printf("Normal in temp.\n");
    }
    else if(t<40)
    {
        printf("Its Hot.\n");
    }
    else
    {
        printf("Its very hot.\n");
    }
    return 0;
}
