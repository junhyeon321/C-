#include <iostream>

using namespace std;

int main(void)
{
	int a = 10;
	int *p = &a;

	cout << "a�� �� : " << a << endl;
	cout << "a�� �ּҰ� : " << p << endl;
	cout << "p�� �� : " << p << endl;
	cout << "p�� ǥ���ϰ��� �ϴ� �� : " << *p << endl;
	cout << "p�� �ּҰ� : " << &p << endl << endl;

	return 0;
}