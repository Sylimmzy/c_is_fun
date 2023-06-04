#include <stdio.h>
#include <string.h>

struct student

{
	int age;
       	char name[20];
	float height;
	double gradepoint;
};

int main(void)
{
	struct student student_1;
	strcpy(student_1.name, "steve jones");
	student_1.age = 20;
	student_1.height = 1.9;
	student_1.gradepoint = 5.0;


        printf("name: %s\n", student_1.name);
        printf("age: %i\n" , student_1.age);
        printf("height: %f\n" , student_1.height);
        printf("gradepoint: %f\n" , student_1.gradepoint);

        return (0);	
}
