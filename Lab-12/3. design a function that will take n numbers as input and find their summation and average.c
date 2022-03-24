#include<stdio.h>
int sum(int n);
void avg(int s, int n);
int main()
{
    int s, a,n;
    printf("how many numbers: ");
    scanf("%d", &n);
    s=sum(n);
    avg(s,n);
    return 0;
}
int sum(int n)
{
    int s=0,i, a[n];
    printf("Enter numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("Summation is %d\n", s);
    return s;
}
void avg(int s, int n)
{
    float avg;
    avg=(float)s/n;
    printf("Average is %f", avg);
    return 0;
}
