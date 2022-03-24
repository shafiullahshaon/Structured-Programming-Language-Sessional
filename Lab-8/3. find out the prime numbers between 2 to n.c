#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(i>9)
        {
            if(i%9!=0)
            {
                if(i%8!=0)
                {
                    if(i%7!=0)
                    {
                        if(i%6!=0)
                        {
                            if(i%5!=0)
                            {
                                if(i%4!=0)
                                {
                                    if(i%3!=0)
                                    {
                                        if(i%2!=0)
                                        {
                                            printf("%d ",i);
                                        }

                                    }

                                }

                            }

                        }

                    }

                }

            }
        }
        else if(i>3)
        {
            if(i%3!=0)
            {
                if(i%2!=0)
                {
                    printf("%d ",i);
                }
            }

        }
        else if(i==2)
        {
            printf("2 ");
        }
        else if(i==3)
        {
            printf("3 ");
        }

    }
}
