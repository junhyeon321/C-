/*M&S 2�� ����
  20140543_������*/

#include <iostream>

int main(void)
{
	std::cout << "\t\t\t�迭�� ���ǿ� �ʱ�ȭ" << std::endl;

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