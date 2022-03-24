#include <stdio.h>
int main()
{
    int i,j, A[2][3], At[3][2];
    printf("Enter the value of matrix A:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            At[j][i]=A[i][j];
        }
    }
    printf("Matrix A:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("Transpose Matrix At:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",At[i][j]);
        }
        printf("\n");
    }
    return 0;
}
