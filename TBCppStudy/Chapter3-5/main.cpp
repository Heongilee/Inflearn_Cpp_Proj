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


	// ����� ���� ��� �� epsilon�� �ְ� �� ������ �۴ٸ� ���� ���ٰ� ���� ���α׷�.
	//constexpr int Lim_of_Err = 10;
	constexpr double epsilon = 1e-10;	//10�� ������ ���� �ʰ� ���� �����ϴ�.

	if (abs(d1 - d2) < epsilon)
		cout << "Approximately Equal" << endl;
	else
		cout << "Not Equal" << endl;
	
	cout << abs(d1 - d2) << endl;


	return 0;
}