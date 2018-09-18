/* M&S 1주차 : 사칙연산 계산기
			   20140543 김준현 */

#include <iostream>

int main(void)
{
	std::cout << "\n\t\t\t\t\t\t사칙연산 계산기\n\n";

	while (1)	// 무한반복문을 통해서 
	{
		double result;
		int c;
		std::cout << "수식을 입력하려면 1번, 프로그램을 종료하려면 2번을 입력하세요. => ";
		std::cin >> c;

		if (c == 1)
		{
			int a, b;
			char op;
			std::cout << "수식을 입력해주세요. => ";
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
			std::cout << a << op << b << "=" << result << "입니다.\n" << std::endl;
		}

		else
			break;
	}

	std::cout << "프로그램을 종료합니다.\n" << std::endl;

	return 0;
}