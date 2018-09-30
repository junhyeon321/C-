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

student A[i] = { {"김준현",20140543,4.5},
				 {"김태형",20140545,3.7},
				 {"문정환",20140550,4.3} };

void Scan(student);
void Part(student);
void All(student);

int main(void)
{

	while (1)
	{

		int a;
		cout << "1번 : 구조체 입력, 2번 : 구조체 일부 출력, 3번 : 구조체 전부 출력, 4번 : 프로그램 종료 => ";
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

	cout << "프로그램을 종료합니다." << endl;

	return 0;
}

void Scan(student)
{
	string name1;
	int num1;
	double grade1;

	cout << "구조체 입력" << endl;
	cout << "학생의 정보를 입력하세요." << endl;
	cout << "이름 : ";
	cin >> name1;
	cout << "\n학번 : ";
	cin >> num1;
	cout << "\n학점 : ";
	cin >> grade1;

	if ((name1 == "김준현") && (num1 == 20140543) && (grade1 == 4.5))
	{
		cout << endl << "★" << name1 << "★ 학생의 정보입니다." << endl << endl;
		cout << A[0].name << endl;
		cout << A[0].num << endl;
		cout << A[0].grade << endl;
	}

	else if ((name1 == "김태형") && (num1 == 20140545) && (grade1 == 3.7))
	{
		cout << endl << "★" << name1 << "★ 학생의 정보입니다." << endl << endl;
		cout << A[1].name << endl;
		cout << A[1].num << endl;
		cout << A[1].grade << endl;
	}

	else if ((name1 == "문정환") && (num1 == 20140550) && (grade1 == 4.3))
	{
		cout << endl << "★" << name1 << "★ 학생의 정보입니다." << endl << endl;
		cout << A[2].name << endl;
		cout << A[2].num << endl;
		cout << A[2].grade << endl;
	}

	else
	{
		cout << "잘못된 입력입니다. 다시 입력해주세요." << endl;
	}

	return;
}

void Part(student)
{
	int num2;
	cout << "구조체 일부 출력" << endl;
	cout << "학생의 번호를 입력해주세요. -> ";
	cin >> num2;
	cout << "\n" << num2 << "번 학생의 정보는 다음과 같습니다." << endl << endl;

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
	cout << "구조체 전부 출력" << endl;
	for (int j = 0; j < i; j++)
	{
		cout << "\n" << j + 1 << "번" << endl << endl;
		cout << A[j].name << endl;
		cout << A[j].num << endl;
		cout << A[j].grade << endl << endl;
	}

	return;
}