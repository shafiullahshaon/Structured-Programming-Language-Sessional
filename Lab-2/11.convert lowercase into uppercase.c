#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character in lowercase: ");
	scanf("%c",&ch);
	printf("character in uppercase= %c",ch-32);
	getch();
	return 0;
}
