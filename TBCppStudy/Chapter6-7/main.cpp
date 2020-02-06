#include <iostream>
#include <typeinfo>

using namespace std;

struct Ch_8_9_Sth
{
	int a, b, c, d; // 4 * 4 = 16byte
};

int main() 
{
	////			Pra1.

	//int x = 5;
	//cout << x << endl;
	//cout << &x << endl; // &adress-of operator
	//cout << (int)&x << endl; // &adress-of operator

	////de-reference operator(*)
	//cout << *(&x) << endl;

	////			Pra2.
	//
	//int x = 5, y = 3;

	//int *ptr_x = &x;
	//int* ptr_y = &y;	//de-reference opr위치가 다른 두 초기화의 차이?
	///*
	//typedef int* pint;
	//pint ptr_x;

	//※기능상 차이점은 없다.
	//*/

	//cout << ptr_x << endl;
	//cout << *ptr_x << endl;

	////			Pra3.
	//double d = 123.0;

	//double *ptr_d = &d;

	//cout << ptr_d << endl;
	//cout << *ptr_d << endl;

	////				Pra4.
	//int x = 5;	int *ptr_x = &x;

	//cout << typeid(ptr_x).name() << endl;

	////					Pra5. (x64 환경과 x86환경 둘이서 비교해볼것.)
	//int x = 5;
	//double d = 123.0;

	//int *ptr_x = &x;
	//double *ptr_d = &d;

	//cout << sizeof(x) << endl;
	//cout << sizeof(d) << endl;
	//cout << sizeof(&x) <<" "<< sizeof(ptr_x) << endl;
	//cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;

	//cout << ptr_x <<" "<<ptr_d<< endl;

	////						Pra6.
	//Sth ss;
	//Sth *ptr_ss;

	//cout << sizeof(Sth) << endl;
	//cout << sizeof(ptr_ss) << endl;

	//							Pra7.
	int x = 5;	//int *ptr_x = &x;

	cout << *ptr_x << endl;



	return 0;
}