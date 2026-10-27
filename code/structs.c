#include <stdio.h>
#include <string.h>

struct Students
{
	char name[50];
	char major[50];
	int age;
	double gpa;
};


int main(void)
{
	struct Students student1;
	student1.age = 22;
	student1.gpa = 3.2;
	strcpy( student1.name, "Jim" );
	strcpy( student1.major, "Business" );

	struct Students student2;
	student2.age = 20;
	student2.gpa = 2.5;
	strcpy( student2.name, "Pam" );
	strcpy( student2.major, "Art" );


	printf("%s\n", student2.name);

	return 0;
}
