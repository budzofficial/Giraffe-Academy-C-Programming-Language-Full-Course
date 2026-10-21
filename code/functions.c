#include <stdio.h>

void sayHi(char name[20], int age);

int main(void)
{
	sayHi("Mike", 40);
	sayHi("Tom", 23);
	sayHi("Oscar", 70);

	return 0;
}

void sayHi(char name[20], int age)
{
	printf("Hello %s, you are %d\n", name, age);
}
