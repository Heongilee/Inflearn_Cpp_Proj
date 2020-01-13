#include <iostream>

using namespace std;

void doSth(const int& x)
//이 파라미터 타입은 인자에 상수를 넣을때 변수의 복사가 발생하지 않기 때문에 메모리관리에서 효율적이다.
{
	cout << x << endl;

	return;
}

int main() 
{
	int x = 5;
	const int &ref_x = 5;

	doSth(x);
	doSth(1);
	doSth(x + 3);
	doSth(3 * 4);


	return 0;
}