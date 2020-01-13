#include <iostream>
#include "MY_CONSTANT.h"

void printNumber(const int my_number)
{
	int n = my_number;

	std::cout << n << std::endl;

	return;
}

int main() 
{
	using namespace std;

	//			//Pra1.
	//			// 의미가 달라질 수 있다.
	//const double gravity{ 9.8 };	//중력 상수 값
	//double const gravity2{ 1.2 };
	//printNumber(123);

	//			//Pra2. 
	//	//Compile Time Constant
	////const int Number(312);
	//	//또는
	//constexpr int Number(312);


	//	//RunTime Constant
	//int number;
	//cin >> number;

	//const int special_number(number);

	//	//컴파일 타임 상수 타입을 런타임 상수에서 사용하려고 할때 뜨는 에러 예시
	//int Num;
	//cin >> Num;

	//constexpr int Special_Num(Num);

				//Pra3.
		//MY_CONSTANT.h에다가 코드에 쓰일 상수들을 모아놔서 운용하는 케이스
		//실무에서 이 방법이 더 많이 쓰임.
	double radius;
	cin >> radius;
	
	double circumference = 2.0 * radius * My_constants::pi;
	cout << circumference << endl;


	return 0;
}