#include "main.h"

class Student {
public:
	string name;
	string surname;
	int age;
	float avg_mark;
};

int main() {
	Student student1;
	Student student2;

	student1.name = "Ivan";
	student1.surname = "Ivanov";
	student1.avg_mark = 10;
	student1.age = 15;

	student2.name = "Peter";
	student2.surname = "Petrov";
	student2.age = 14;
	student2.avg_mark = 4;

	if (student1.avg_mark > student2.avg_mark) {
		cout << student1.name << " " << student1.surname <<" is the best student.";

	}
	else {
		cout << student2.name << " " << student2.surname << " is the best student.";
	}
	

	return 0;
}