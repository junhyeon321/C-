/*M&S 2주차 : 배열, 구조체, 포인터
				   20140543_김준현*/


#include <iostream>

using namespace std;											// 이름공간을 활용하여 std 사용을 생략.

int main(void)
{
	int a = 10;
	int *p = &a;												// 포인터 변수 p는 int형 변수 a의 주소값을 저장.

	cout << "a의 값 : " << a << endl;							// 변수 a에 저장된 값인 10을 반환.
	cout << "a의 주소값 : " << p << endl;						// 변수 a의 주소값을 반환(=&a)
	cout << "p의 값 : " << p << endl;							// 포인터 변수 p의 값을 반환(=&a)
	cout << "p가 표시하고자 하는 값 : " << *p << endl;			// 포인터 변수 p가 가리키는 값인 10을 반환(=a)
	cout << "p의 주소값 : " << &p << endl << endl;				// 포인터 변수 p의 주소값을 반환.

	double b = 5.12;											
	double *q = &b;												// 포인터 변수 q는 double형 변수 b의 주소값을 저장.

	cout << "b의 값 : " << b << endl;							// 변수 b에 저장된 값인 5.14을 반환.
	cout << "b의 주소값 : " << q << endl;						// 변수 b의 주소값을 반환(=&b)
	cout << "q의 값 : " << q << endl;							// 포인터 변수 q의 값을 반환(=&b)
	cout << "q가 표시하고자 하는 값 : " << *q << endl;			// 포인터 변수 q가 가리키는 값인 5.14을 반환(=b)
	cout << "q의 주소값 : " << &q << endl << endl;				// 포인터 변수 q의 주소값을 반환

	char c = 'c';												// 포인터 변수 t는 char형 변수 c의 주소값을 저장.
	void *t =(void *) &c;											// char형은 cout 함수의 특성상 주소 출력에 오류가 발생하기 때문에 int형으로 형변환.

	cout << "c의 값 : " << c << endl;							// 변수 c에 저장된 값인 'c'를 반환.
	cout << "c의 주소값 : " <<  t << endl;						// 변수 c의 주소값을 반환(=&c)
	cout << "t의 값 : " << t << endl;							// 포인터 변수 t의 값을 반환(=&c)
	cout << "t가 표시하고자 하는 값 : " << c << endl;			// 포인터 변수 t가 가리키는 값인 'c'를 반환(=*t)
	cout << "t의 주소값 : " << &t << endl << endl;				// 포인터 변수 t의 주소값을 반환.

	return 0;
}