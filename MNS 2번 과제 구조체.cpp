/*M&S 2���� : �迭, ����ü, ������
				   20140543_������*/


#include <iostream>

struct student															// �̸��� �й�, ������ �ϳ��� ����ü�ȿ� ����.
{
	char name[50];
	int num;
	double grade;
};

int main(void)
{
	student A = { "������",20140543,4.5 };								// ����ü�� ����Ͽ� �л� A�� �̸�,�й�,������ ����.
	student B = { "������",20140545,3.7 };								// ����ü�� ����Ͽ� �л� B�� �̸�,�й�,������ ����.

	std::cout << "\n�̸� : " << A.name << std::endl;					// ����ü�� ����Ͽ� �ʱ�ȭ�� �л� A�� �̸�,�й�,������ ����ϴ� �κ�.	
	std::cout << "�й� : " << A.num << std::endl;
	std::cout << "���� : " << A.grade << std::endl << std::endl;	
	std::cout << "----------------------------\n\n";

	std::cout << "�̸� : " << B.name << std::endl;						// ����ü�� ����Ͽ� �ʱ�ȭ�� �л� B�� �̸�,�й�,������ ����ϴ� �κ�.
	std::cout << "�й� : " << B.num << std::endl;
	std::cout << "���� : " << B.grade << std::endl << std::endl;
	std::cout << "----------------------------\n";

	return 0;
}