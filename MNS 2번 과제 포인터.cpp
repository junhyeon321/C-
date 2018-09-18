#include <iostream>

using namespace std;

int main(void)
{
	int num1 = 3;
	int *ptr = &num1;

	cout << "num1의 값 = " << num1 << endl;
	cout << "num1의 주소값 = " << ptr << endl;

	return 0;
}