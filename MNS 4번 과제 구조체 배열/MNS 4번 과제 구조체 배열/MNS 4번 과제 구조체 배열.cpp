#include <iostream>
#include <string>
#define i 3

using namespace std;

struct student									//구조체 선언
{
	char name[50];
	int num;
	double grade;
};

student A[i] = { {"김준현",20140543,4.5},		//3개의 배열을 가지는 구조체 배열을 정의
				 {"김태형",20140545,3.7},
				 {"문정환",20140550,4.3} };

void Scan(student);								//정의된 구조체 배열을 출력하기 위한 함수를 선언
void Part(student);
void All(student);

int main(void)
{

	while (1)									//무한반복문을 사용하여 원하는 시점에서 프로그램을 종료가능
	{

		int a;
		cout << "---------------------------------------출석부-------------------------------------------" << endl << endl;
		cout << "1번 : 구조체 입력, 2번 : 구조체 일부 출력 3번 : 구조체 전부 출력, 4번 : 프로그램 종료 => ";
		cin >> a;

		if (a == 4)								//4번을 누르면 if문에서 break해서 무한반복문을 빠져나감
			break;

		else
		{
			switch (a)							//switch문을 이용하여 해당 번호에 맞는 함수를 실행
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

/*구조체 배열을 출력하기 위한 함수들을 정의한 부분*/

void Scan(student)																		//구조체 입력을 위한 함수를 정의한 부분
{
	string name1;																		//문자열을 비교하기 위해서 string형으로 선언
	int num1;
	double grade1;

	cout << "\n구조체 입력" << endl;
	cout << "학생의 정보를 입력하세요." << endl;
	cout << "\n이름 : ";
	cin >> name1;
	cout << "학번 : ";
	cin >> num1;
	cout << "학점 : ";
	cin >> grade1;

	if ((name1 == "김준현") && (num1 == 20140543) && (grade1 == 4.5))					//이름,학번,성적 3개의 입력이 모두 일치하면 구조체 배열을 출력
	{
		cout << endl << "★" << name1 << "★ 학생의 정보입니다." << endl << endl;
		cout << "이름: " << A[0].name << endl;
		cout << "학번: " << A[0].num << endl;
		cout << "성적: " << A[0].grade << endl << endl;
	}

	else if ((name1 == "김태형") && (num1 == 20140545) && (grade1 == 3.7))
	{
		cout << endl << "★" << name1 << "★ 학생의 정보입니다." << endl << endl;
		cout << "이름: " << A[1].name << endl;
		cout << "학번: " << A[1].num << endl;
		cout << "성적: " << A[1].grade << endl << endl;
	}

	else if ((name1 == "문정환") && (num1 == 20140550) && (grade1 == 4.3))
	{
		cout << endl << "★" << name1 << "★ 학생의 정보입니다." << endl << endl;
		cout << "이름: " << A[2].name << endl;
		cout << "학번: " << A[2].num << endl;
		cout << "성적: " << A[2].grade << endl << endl;
	}

	else																				//3개의 입력 중에서 하나라도 틀리면 배열이 출력되지 않음
	{
		cout << "\n잘못된 입력입니다. 다시 입력해주세요." << endl;
	}

	return;
}

void Part(student)								//구조체 배열 일부를 출력하는 함수를 정의한 부분
{
	int num2;
	cout << "\n구조체 일부 출력" << endl;
	cout << "학생의 번호를 입력해주세요. -> ";
	cin >> num2;
	cout << "\n★" << A[num2-1].name << "★학생의 정보는 다음과 같습니다." << endl << endl;

	switch (num2)								//switch 문을 이용하여 입력받은 번호에 맞는 구조체 배열을 출력
	{
		case 1:
			{
				cout << "이름: " << A[0].name << endl;
				cout << "학번: " << A[0].num << endl;
				cout << "성적: " << A[0].grade << endl << endl;
				break;
			}

		case 2:
			{
				cout << "이름: " << A[1].name << endl;
				cout << "학번: " << A[1].num << endl;
				cout << "성적: " << A[1].grade << endl << endl;
				break;
			}

		case 3:
			{
				cout << "이름: " << A[2].name << endl;
				cout << "학번: " << A[2].num << endl;
				cout << "성적: " << A[2].grade << endl << endl;
				break;
			}
	}
	return;
}

void All(student)								//구조체 배열 전부를 출력하는 부분
{
	cout << "\n구조체 전부 출력\n" << endl;
	for (int j = 0; j < i; j++)					//for문을 이용하여 배열이 차지하는 마지막 공간인 2번까지 모두 다 출력
	{
		cout << "★" << j + 1 << "번★" << endl << endl;
		cout << "이름: " << A[j].name << endl;
		cout << "학번: " << A[j].num << endl;
		cout << "성적: " << A[j].grade << endl << endl;
	}

	return;
}