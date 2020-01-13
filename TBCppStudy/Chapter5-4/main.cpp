#include <iostream>

int main() 
{
	using namespace std;
	
	/*			//Pra1. goto문을 이용하여 음수 값을 받을때까지 무한 반복 프로그램.
	double x;

tryAgain:			//Label : ①레이블을 지정한다.
	cout << "Enter a non-negative number" << endl;
	cin >> x;

	if (x < 0.0)
		goto tryAgain;
	*/

				//Pra2. 흔히 일어날 수 있는 본질적인 문제 case 1
	goto skip;

	int x = 5;

skip:

	x += 3;

	return 0;
}