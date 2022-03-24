#include<stdio.h>
int main()
{
    float f,m;
    int n;
    printf("\t 1.   feet to meter\n");
    printf("\t 2.   meter to feet\n");
    printf("Enter option: ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Enter the value of number in feet: ");
        scanf("%f",&f);
        m=f/3.28;
        printf("%f feet= %f meters",f,m);
    }
    else
    {
        printf("Enter the value of number in meter: ");
        scanf("%f",&m);
        f=m*3.28;
        printf("%f meters = %f feet",m,f);
    }
    return 0;
}
