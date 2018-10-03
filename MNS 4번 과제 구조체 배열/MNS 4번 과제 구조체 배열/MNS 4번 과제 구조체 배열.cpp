#include <iostream>
#include <string>
#define i 3

using namespace std;

struct student									//����ü ����
{
	char name[50];
	int num;
	double grade;
};

student A[i] = { {"������",20140543,4.5},		//3���� �迭�� ������ ����ü �迭�� ����
				 {"������",20140545,3.7},
				 {"����ȯ",20140550,4.3} };

void Scan(student);								//���ǵ� ����ü �迭�� ����ϱ� ���� �Լ��� ����
void Part(student);
void All(student);

int main(void)
{

	while (1)									//���ѹݺ����� ����Ͽ� ���ϴ� �������� ���α׷��� ���ᰡ��
	{

		int a;
		cout << "---------------------------------------�⼮��-------------------------------------------" << endl << endl;
		cout << "1�� : ����ü �Է�, 2�� : ����ü �Ϻ� ��� 3�� : ����ü ���� ���, 4�� : ���α׷� ���� => ";
		cin >> a;

		if (a == 4)								//4���� ������ if������ break�ؼ� ���ѹݺ����� ��������
			break;

		else
		{
			switch (a)							//switch���� �̿��Ͽ� �ش� ��ȣ�� �´� �Լ��� ����
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

/*����ü �迭�� ����ϱ� ���� �Լ����� ������ �κ�*/

void Scan(student)																		//����ü �Է��� ���� �Լ��� ������ �κ�
{
	string name1;																		//���ڿ��� ���ϱ� ���ؼ� string������ ����
	int num1;
	double grade1;

	cout << "\n����ü �Է�" << endl;
	cout << "�л��� ������ �Է��ϼ���." << endl;
	cout << "\n�̸� : ";
	cin >> name1;
	cout << "�й� : ";
	cin >> num1;
	cout << "���� : ";
	cin >> grade1;

	if ((name1 == "������") && (num1 == 20140543) && (grade1 == 4.5))					//�̸�,�й�,���� 3���� �Է��� ��� ��ġ�ϸ� ����ü �迭�� ���
	{
		cout << endl << "��" << name1 << "�� �л��� �����Դϴ�." << endl << endl;
		cout << "�̸�: " << A[0].name << endl;
		cout << "�й�: " << A[0].num << endl;
		cout << "����: " << A[0].grade << endl << endl;
	}

	else if ((name1 == "������") && (num1 == 20140545) && (grade1 == 3.7))
	{
		cout << endl << "��" << name1 << "�� �л��� �����Դϴ�." << endl << endl;
		cout << "�̸�: " << A[1].name << endl;
		cout << "�й�: " << A[1].num << endl;
		cout << "����: " << A[1].grade << endl << endl;
	}

	else if ((name1 == "����ȯ") && (num1 == 20140550) && (grade1 == 4.3))
	{
		cout << endl << "��" << name1 << "�� �л��� �����Դϴ�." << endl << endl;
		cout << "�̸�: " << A[2].name << endl;
		cout << "�й�: " << A[2].num << endl;
		cout << "����: " << A[2].grade << endl << endl;
	}

	else																				//3���� �Է� �߿��� �ϳ��� Ʋ���� �迭�� ��µ��� ����
	{
		cout << "\n�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���." << endl;
	}

	return;
}

void Part(student)								//����ü �迭 �Ϻθ� ����ϴ� �Լ��� ������ �κ�
{
	int num2;
	cout << "\n����ü �Ϻ� ���" << endl;
	cout << "�л��� ��ȣ�� �Է����ּ���. -> ";
	cin >> num2;
	cout << "\n��" << A[num2-1].name << "���л��� ������ ������ �����ϴ�." << endl << endl;

	switch (num2)								//switch ���� �̿��Ͽ� �Է¹��� ��ȣ�� �´� ����ü �迭�� ���
	{
		case 1:
			{
				cout << "�̸�: " << A[0].name << endl;
				cout << "�й�: " << A[0].num << endl;
				cout << "����: " << A[0].grade << endl << endl;
				break;
			}

		case 2:
			{
				cout << "�̸�: " << A[1].name << endl;
				cout << "�й�: " << A[1].num << endl;
				cout << "����: " << A[1].grade << endl << endl;
				break;
			}

		case 3:
			{
				cout << "�̸�: " << A[2].name << endl;
				cout << "�й�: " << A[2].num << endl;
				cout << "����: " << A[2].grade << endl << endl;
				break;
			}
	}
	return;
}

void All(student)								//����ü �迭 ���θ� ����ϴ� �κ�
{
	cout << "\n����ü ���� ���\n" << endl;
	for (int j = 0; j < i; j++)					//for���� �̿��Ͽ� �迭�� �����ϴ� ������ ������ 2������ ��� �� ���
	{
		cout << "��" << j + 1 << "����" << endl << endl;
		cout << "�̸�: " << A[j].name << endl;
		cout << "�й�: " << A[j].num << endl;
		cout << "����: " << A[j].grade << endl << endl;
	}

	return;
}