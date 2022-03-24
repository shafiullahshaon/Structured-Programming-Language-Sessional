//find out grade
#include<stdio.h>
int main()
{
    int n;
    printf("Enter your marks: ");
    scanf("%d", &n);
    if(n>=0 && n<=39)
    {
        printf("F grade");
    }
    else if(n>=40 && n<=44)
    {
        printf("D grade");
    }
    else if(n>=45 && n<=49)
    {
        printf("C grade");
    }
    else if(n>=50 && n<=54)
    {
        printf("C+ grade");
    }
    else if(n>=55 && n<=59)
    {
        printf("B- grade");
    }
    else if(n>=60 && n<=64)
    {
        printf("B grade");
    }
    else if(n>=65 && n<=69)
    {
        printf("B+ grade");
    }
    else if(n>=70 && n<=74)
    {
        printf("A- grade");
    }
    else if(n>=75 && n<=79)
    {
        printf("A grade");
    }
     else if(n>=80 && n<=100)
    {
        printf("A+ grade");
    }
    else
    {
        printf("Invalid Marks");
    }
    return 0;
}
