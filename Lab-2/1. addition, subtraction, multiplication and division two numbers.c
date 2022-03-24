#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter first Number: ");
	scanf("%d",&a);
	printf("Enter second Number: ");
	scanf("%d",&b);
    printf("addition is %d",a+b);
    printf("\nsubtraction is %d",a-b);
    printf("\nmultiplication is %d",a*b);
    printf("\ndivision is %d",a/b);
	getch();
	return 0;
}
