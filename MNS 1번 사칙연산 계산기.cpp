/* M&S 1���� : ��Ģ���� ����
			   20140543 ������ */

#include <iostream>

int main(void)
{
	std::cout << "\n\t\t\t\t\t\t��Ģ���� ����\n\n";

	while (1)	// ���ѹݺ����� ���ؼ� 
	{
		double result;
		int c;
		std::cout << "������ �Է��Ϸ��� 1��, ���α׷��� �����Ϸ��� 2���� �Է��ϼ���. => ";
		std::cin >> c;

		if (c == 1)
		{
			int a, b;
			char op;
			std::cout << "������ �Է����ּ���. => ";
			std::cin >> a >> op >> b;

			switch (op)
			{
			case '+': result = a + b;
				break;
			case '-': result = a - b;
				break;
			case '*': result = a * b;
				break;
			case '/': result = (double)a / b;
				break;
			}
			std::cout << a << op << b << "=" << result << "�Դϴ�.\n" << std::endl;
		}

		else
			break;
	}

	std::cout << "���α׷��� �����մϴ�.\n" << std::endl;

	return 0;
}