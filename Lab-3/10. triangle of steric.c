#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Given the lines of a triangle: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
    return 0;
}
