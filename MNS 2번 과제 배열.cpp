/*M&S 2���� : �迭, ����ü, ������
				   20140543_������*/

#include <iostream>

int main(void)
{
	std::cout << "\t\t\t�迭�� ���ǿ� �ʱ�ȭ" << std::endl;

	int type[5] = { 5, 10, 15, 20, 25 };										// �迭�� ���ǿ� �ʱ�ȭ�� �����ϴ� ���.

	for (int i = 0; i < 5; i++)
		std::cout << "type[" << i << "]=" << type[i] << "\n" << std::endl;		// �ʱ�ȭ �� �迭�� ����ϱ� ���Ͽ� �ݺ����� ���.

	for (int i = 0; i < 5; i++)													// �迭�� �����ϰ� �迭�� ������ ���� �Է��ϴ� �κ�.
	{
		std::cout << i << "��° ���� => ";
		std::cin >> type[i];
	}

	for (int i = 0; i < 5; i++)													// ������ ���� ��¹��� �迭�� ����ϴ� �κ�.
	{
		std::cout << "type[" << i << "]=" << type[i] << std::endl;
	}

	return 0;
}