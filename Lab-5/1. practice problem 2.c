//if else control statement
#include<stdio.h>
int main()
{
    int gpa;
    printf("Enter your result: ");
    scanf("%d",&gpa);
    if(gpa>=4.00)
    {
        printf("Admission possible");
    }
    else
    {
        printf("Not possible");
    }
    return 0;
}
