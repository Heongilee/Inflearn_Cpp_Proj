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
	//			// �ǹ̰� �޶��� �� �ִ�.
	//const double gravity{ 9.8 };	//�߷� ��� ��
	//double const gravity2{ 1.2 };
	//printNumber(123);

	//			//Pra2. 
	//	//Compile Time Constant
	////const int Number(312);
	//	//�Ǵ�
	//constexpr int Number(312);


	//	//RunTime Constant
	//int number;
	//cin >> number;

	//const int special_number(number);

	//	//������ Ÿ�� ��� Ÿ���� ��Ÿ�� ������� ����Ϸ��� �Ҷ� �ߴ� ���� ����
	//int Num;
	//cin >> Num;

	//constexpr int Special_Num(Num);

				//Pra3.
		//MY_CONSTANT.h���ٰ� �ڵ忡 ���� ������� ��Ƴ��� ����ϴ� ���̽�
		//�ǹ����� �� ����� �� ���� ����.
	double radius;
	cin >> radius;
	
	double circumference = 2.0 * radius * My_constants::pi;
	cout << circumference << endl;


	return 0;
}