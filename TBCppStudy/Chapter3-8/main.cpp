/*	BITWISE OPERATOR

<< : (Bitwise) left shift
>> : (Bitwise) right shift
~ : (Bitwise) Not
& : (Bitwise) And
| : (Bitwise) Or
^ : (Bitwise) Xor 
*/
#include <iostream>
#include <bitset>	//2진수로 바꿔서 출력해주는 라이브러리

int main() 
{
	using namespace std;

	//Quiz
	/*
	0110 >> 2 -> decimal
		//0001 -> 1
	5 | 12
	0101	1100
		// 1101
	5 & 12
	0101
	1100
		// 0100
	 */

	unsigned int a = 0b0110;
	unsigned int b = 0b0101;	//5
	unsigned int c = 0b1100;	//12

	cout << bitset<4>(a >> 2) << endl;
	cout << bitset<4>(0b0101 | 0b1100) << endl;
	cout << bitset<4>(0b0101 & 0b1100) << endl;

	return 0;
}

