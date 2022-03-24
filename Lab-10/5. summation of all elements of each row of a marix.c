#include <stdio.h>
int main()
{
    int i, j, r,c,s;
    printf("How many rows: ");
    scanf("%d", &r);
    printf("How many columns: ");
    scanf("%d", &c);
    int a[r][c];
    printf("Enter the value of a matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        s=0;
        for(j=0;j<c;j++)
        {
            s=s+a[i][j];
        }
        printf("Summation of row-%d=%d\n",i+1,s);
    }
    return 0;
}

