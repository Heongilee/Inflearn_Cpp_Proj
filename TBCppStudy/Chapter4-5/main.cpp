#include <iostream>
#include <iomanip>
#include <limits>
#include <typeinfo>

int main() 
{
	using namespace std;

	/*		//Pra1.
	int a = 123;
	// 4.0�̶�� Literal�� � �ڷ����� ������ �ִ��� ������ش�.

	cout << typeid(4.0).name() << endl;
	cout << typeid(a).name() << endl;

	//Numeric Promotion (���� ������ ū ������ ��)
	float a = 1.0f;
	double d = a;

	//Numeric Conversion(ū ������ ���� ������ ���ų� ���� �ٲ�� ��)
	double c = 3;
	short s = 2;
	*/

	/*			//Pra2.
	int i = 25;
	char c = i;

	cout << static_cast<int>(c) << endl;
	*/

	/*			//Pra3.
	double d = 0.123456789;
	float f = d;

	cout <<setprecision(12)<< d << endl;
	*/


	/*			//Pra4.
	cout << 5u-10u << endl;

	// 4����Ʈ ���ϴ� �ڵ����� int �� �ٲ��
	// ���� ������� ������ �켱������ ������.
	// int, unsigned int, 
	// long, unsigned long, long long, unsigned long long
	// float, double, long double
	*/

	//
	int i = int(4.0);				//C++	Style Casting
	int j = (int)4.0;				//C		Style Casting
	int k = static_cast<int>(4.0);	//��ɼ� ���̴� ��...


	return 0;
}