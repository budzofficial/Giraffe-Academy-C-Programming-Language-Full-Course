#include <stdio.h>

int main(void)
{
	char name[20];

	printf("Enter your name: ");
	fgets(name, 20, stdin);

	printf("Your name is %s\n", name);

	return 0;
}
