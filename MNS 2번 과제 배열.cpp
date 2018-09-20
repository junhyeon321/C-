/*M&S 2주차 : 배열, 구조체, 포인터
				   20140543_김준현*/

#include <iostream>

int main(void)
{
	std::cout << "\t\t\t배열의 정의와 초기화" << std::endl;

	int type[5] = { 5, 10, 15, 20, 25 };										// 배열의 정의와 초기화를 같이하는 방법.

	for (int i = 0; i < 5; i++)
		std::cout << "type[" << i << "]=" << type[i] << "\n" << std::endl;		// 초기화 된 배열을 출력하기 위하여 반복문을 사용.

	for (int i = 0; i < 5; i++)													// 배열을 정의하고 배열에 임의의 값을 입력하는 부분.
	{
		std::cout << i << "번째 원소 => ";
		std::cin >> type[i];
	}

	for (int i = 0; i < 5; i++)													// 임의의 값을 출력받은 배열을 출력하는 부분.
	{
		std::cout << "type[" << i << "]=" << type[i] << std::endl;
	}

	return 0;
}