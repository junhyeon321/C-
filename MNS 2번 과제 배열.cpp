/*M&S 2번 과제
  20140543_김준현*/

#include <iostream>

int main(void)
{
	std::cout << "\t\t\t배열의 정의와 초기화" << std::endl;

	int type[5] = { 5, 10, 15, 20, 25 };

	for (int i = 0; i < 5; i++)
		std::cout << "type[" << i << "]=" << type[i] << "\n" << std::endl;

	for (int i = 0; i < 5; i++)
	{
		std::cin >> type[i];

	}

	for (int i = 0; i < 5; i++)
	{
		std::cout << "type[" << i << "]=" << type[i] << std::endl;
	}

	return 0;
}