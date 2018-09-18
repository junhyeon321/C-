#include <iostream>

struct student
{
	char name[50];
	int num;
	double grade;
};

int main(void)
{
	student A = { "김준현",20140543,4.5 };
	student B = { "박진수",20180293,3.7 };

	std::cout << "이름 : " << A.name << std::endl;
	std::cout << "학번 : " << A.num << std::endl;
	std::cout << "학점 : " << A.grade << std::endl << std::endl;
	std::cout << "----------------------------\n\n";

	std::cout << "이름 : " << B.name << std::endl;
	std::cout << "학번 : " << B.num << std::endl;
	std::cout << "학점 : " << B.grade << std::endl << std::endl;
	std::cout << "----------------------------\n";

	return 0;
}