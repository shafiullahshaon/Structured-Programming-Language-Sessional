#include<stdio.h>
int main()
{
    int i, j,k,m,n,o,p,sum=0,f=0;
    printf("Enter the value of matrix A:\n");
    printf("How many rows: ");
    scanf("%d", &m);
    printf("How many columns: ");
    scanf("%d", &n);
    int A[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the value of matrix B:\n");
    printf("How many rows: ");
    scanf("%d", &o);
    printf("How many columns: ");
    scanf("%d", &p);
    int B[o][p];
    for(i=0;i<o;i++)
    {
        for(j=0;j<p;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    int C[m][p];
    if(n!=o)
    {
        f=1;
    }
    else
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<p;j++)
            {
                for(k=0;k<o;k++)
                {
                    sum=sum+A[i][k]*B[k][j];
                }
                C[i][j]=sum;
                sum=0;
            }

        }
    }
    if(f==1)
    {
        printf("Multiplication is not possible");
    }
    else
    {
        printf("Matrix C:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<p;j++)
            {
                printf("%d ",C[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
