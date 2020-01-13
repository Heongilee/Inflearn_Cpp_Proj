#include <iostream>

int main()
{
	using namespace std;

	//float pi = 3.14f;			//3.14는 Literal
	//const float pi2 = 3.14;		//	Symbolic Constant

	// Decimal	: 0 1 2 3 4 5 6 7 8 9 10 11 ...
	// Octal	: 0 1 2 3 4 5 6 7 10 11 12 ...
	// Hexa		: 0 1 2 3 4 5 6 7 8 9 A B C D E F 10 11...

	//			//Pra1. 
	//int x = 12;			// Dec 대입법
	//int Oct_x = 012;	// Octal 대입법
	//int Hex_x = 0xF;	// Hexa 대입법
	//int Bin_x = 0b1101'0101'1101'1010'1010;	
	//// C++14부터 Binary Literal(이진수로 입력)이 가능해짐.
	//// 이진수 입력 중간에 ' 를 넣어줘도 컴파일러는 무시를 한다
	//// 사람의 입장에서는 Readability가 좋아진다는것이 장점.

	//cout << x << endl;
	//cout << Oct_x << endl;
	//cout << Hex_x << endl;
	//cout << Bin_x << endl;

				//Pra2. 
	const int price_per_item = 10;
	int N_items = 123;
	int pirce = N_items * 10;


	return 0;
}