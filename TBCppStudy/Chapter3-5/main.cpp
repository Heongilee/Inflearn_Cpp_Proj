#include <iostream>
#include <iomanip>
#include <cmath>
#define Lim_of_Err 10

int main()
{
	using namespace std;

	double d1(100 - 99.99);	//0.01
	double d2(10 - 9.99);	//0.01

	cout << setprecision(17);
	cout << "d1 is " << d1 << endl;
	cout << "d2 is " << d2 << endl;

	cout << setprecision(6);	//Default


	// 충분히 작은 상수 값 epsilon을 주고 그 값보다 작다면 거의 같다고 보는 프로그램.
	//constexpr int Lim_of_Err = 10;
	constexpr double epsilon = 1e-10;	//10은 정해져 있지 않고 조절 가능하다.

	if (abs(d1 - d2) < epsilon)
		cout << "Approximately Equal" << endl;
	else
		cout << "Not Equal" << endl;
	
	cout << abs(d1 - d2) << endl;


	return 0;
}