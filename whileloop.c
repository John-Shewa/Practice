#include <stdio.h>
int main()
{
	int c;

	c = ' ';
	printf("Enter a character: ");
	printf("press 'x' to exit");
	while(c != 'x'){
		c =getc(stdin);
