#include <iostream>

struct student
{
	char name[50];
	int num;
	double grade;
};

int main(void)
{
	student A = { "������",20140543,4.5 };
	student B = { "������",20180293,3.7 };

	std::cout << "�̸� : " << A.name << std::endl;
	std::cout << "�й� : " << A.num << std::endl;
	std::cout << "���� : " << A.grade << std::endl << std::endl;
	std::cout << "----------------------------\n\n";

	std::cout << "�̸� : " << B.name << std::endl;
	std::cout << "�й� : " << B.num << std::endl;
	std::cout << "���� : " << B.grade << std::endl << std::endl;
	std::cout << "----------------------------\n";

	return 0;
}