//Write a function to print a given character for a given number of times.

#include<stdio.h>

void printCharacter(int n, char ch)
{
	for(int i=0;i<n;i++)
		printf("%c",ch);
}



int main()
{
	int n;
	char ch;
	printf("enter the number of characters to print:n");
	scanf("%d",&n);
	printf("enter the character to print :\n");
	scanf("%*c%c",&ch);

	printCharacter(n,ch);
	return 0;
}
