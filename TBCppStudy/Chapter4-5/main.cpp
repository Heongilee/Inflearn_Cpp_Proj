#include <iostream>
#include <iomanip>
#include <limits>
#include <typeinfo>

int main() 
{
	using namespace std;

	/*		//Pra1.
	int a = 123;
	// 4.0이라는 Literal이 어떤 자료형을 가지고 있는지 출력해준다.

	cout << typeid(4.0).name() << endl;
	cout << typeid(a).name() << endl;

	//Numeric Promotion (작은 곳에서 큰 곳으로 감)
	float a = 1.0f;
	double d = a;

	//Numeric Conversion(큰 곳에서 작은 곳으로 가거나 형이 바뀌는 것)
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

	// 4바이트 이하는 자동으로 int 로 바뀌고
	// 다음 순서대로 갈수록 우선순위가 높아짐.
	// int, unsigned int, 
	// long, unsigned long, long long, unsigned long long
	// float, double, long double
	*/

	//
	int i = int(4.0);				//C++	Style Casting
	int j = (int)4.0;				//C		Style Casting
	int k = static_cast<int>(4.0);	//기능성 차이는 없...


	return 0;
}