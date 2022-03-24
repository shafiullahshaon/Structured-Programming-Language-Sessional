#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character in uppercase: ");
	scanf("%c",&ch);
	printf("character in lowercase= %c",ch+32);
	getch();
	return 0;
}
