#include <iostream>

using namespace std;

int main(void)
{
	int a = 10;
	int *p = &a;

	cout << "a의 값 : " << a << endl;
	cout << "a의 주소값 : " << p << endl;
	cout << "p의 값 : " << p << endl;
	cout << "p가 표시하고자 하는 값 : " << *p << endl;
	cout << "p의 주소값 : " << &p << endl << endl;

	return 0;
}