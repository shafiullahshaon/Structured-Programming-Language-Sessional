#include <stdio.h>
int main()
{
    int i, j, r,c;
    printf("How many rows: ");
    scanf("%d", &r);
    printf("How many columns: ");
    scanf("%d", &c);
    int A[r][c];
    int At[c][r];
    printf("Enter the value of a matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            At[j][i]=A[i][j];
        }
    }
    printf("Matrix A:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("Transpose Matrix At:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",At[i][j]);
        }
        printf("\n");
    }
    return 0;
}
