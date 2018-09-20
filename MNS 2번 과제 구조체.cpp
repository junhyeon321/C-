/*M&S 2주차 : 배열, 구조체, 포인터
				   20140543_김준현*/


#include <iostream>

struct student															// 이름과 학번, 성적을 하나의 구조체안에 정의.
{
	char name[50];
	int num;
	double grade;
};

int main(void)
{
	student A = { "김준현",20140543,4.5 };								// 구조체를 사용하여 학생 A의 이름,학번,성적을 선언.
	student B = { "김태형",20140545,3.7 };								// 구조체를 사용하여 학생 B의 이름,학번,성적을 선언.

	std::cout << "\n이름 : " << A.name << std::endl;					// 구조체를 사용하여 초기화된 학생 A의 이름,학번,성적을 출력하는 부분.	
	std::cout << "학번 : " << A.num << std::endl;
	std::cout << "학점 : " << A.grade << std::endl << std::endl;	
	std::cout << "----------------------------\n\n";

	std::cout << "이름 : " << B.name << std::endl;						// 구조체를 사용하여 초기화된 학생 B의 이름,학번,성적을 출력하는 부분.
	std::cout << "학번 : " << B.num << std::endl;
	std::cout << "학점 : " << B.grade << std::endl << std::endl;
	std::cout << "----------------------------\n";

	return 0;
}