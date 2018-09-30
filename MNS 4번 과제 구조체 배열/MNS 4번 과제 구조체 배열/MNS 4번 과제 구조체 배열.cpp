#include <iostream>
#include <string>
#define i 3

using namespace std;

struct student
{
	char name[50];
	int num;
	double grade;
};

student A[i] = { {"������",20140543,4.5},
				 {"������",20140545,3.7},
				 {"����ȯ",20140550,4.3} };

void Scan(student);
void Part(student);
void All(student);

int main(void)
{

	while (1)
	{

		int a;
		cout << "1�� : ����ü �Է�, 2�� : ����ü �Ϻ� ���, 3�� : ����ü ���� ���, 4�� : ���α׷� ���� => ";
		cin >> a;

		if (a == 4)
			break;

		else
		{
			switch (a)
			{

			case 1: Scan(A[i]);
				break;
			case 2: Part(A[i]);
				break;
			case 3: All(A[i]);
				break;

			};
		}
	}

	cout << "���α׷��� �����մϴ�." << endl;

	return 0;
}

void Scan(student)
{
	string name1;
	int num1;
	double grade1;

	cout << "����ü �Է�" << endl;
	cout << "�л��� ������ �Է��ϼ���." << endl;
	cout << "�̸� : ";
	cin >> name1;
	cout << "\n�й� : ";
	cin >> num1;
	cout << "\n���� : ";
	cin >> grade1;

	if ((name1 == "������") && (num1 == 20140543) && (grade1 == 4.5))
	{
		cout << endl << "��" << name1 << "�� �л��� �����Դϴ�." << endl << endl;
		cout << A[0].name << endl;
		cout << A[0].num << endl;
		cout << A[0].grade << endl;
	}

	else if ((name1 == "������") && (num1 == 20140545) && (grade1 == 3.7))
	{
		cout << endl << "��" << name1 << "�� �л��� �����Դϴ�." << endl << endl;
		cout << A[1].name << endl;
		cout << A[1].num << endl;
		cout << A[1].grade << endl;
	}

	else if ((name1 == "����ȯ") && (num1 == 20140550) && (grade1 == 4.3))
	{
		cout << endl << "��" << name1 << "�� �л��� �����Դϴ�." << endl << endl;
		cout << A[2].name << endl;
		cout << A[2].num << endl;
		cout << A[2].grade << endl;
	}

	else
	{
		cout << "�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���." << endl;
	}

	return;
}

void Part(student)
{
	int num2;
	cout << "����ü �Ϻ� ���" << endl;
	cout << "�л��� ��ȣ�� �Է����ּ���. -> ";
	cin >> num2;
	cout << "\n" << num2 << "�� �л��� ������ ������ �����ϴ�." << endl << endl;

	if (num2 == 1)
	{
		cout << A[0].name << endl;
		cout << A[0].num << endl;
		cout << A[0].grade << endl << endl;
	}

	else if (num2 == 2)
	{
		cout << A[1].name << endl;
		cout << A[1].num << endl;
		cout << A[1].grade << endl;
	}

	else
	{
		cout << A[2].name << endl;
		cout << A[2].num << endl;
		cout << A[2].grade << endl;
	}

	return;
}

void All(student)
{
	cout << "����ü ���� ���" << endl;
	for (int j = 0; j < i; j++)
	{
		cout << "\n" << j + 1 << "��" << endl << endl;
		cout << A[j].name << endl;
		cout << A[j].num << endl;
		cout << A[j].grade << endl << endl;
	}

	return;
}