#include <iostream>

int main() {
	using namespace std;

	//auto 자료형 초기화
	auto aVal1 = 3.141592f;
	auto aVal2 = 3.141592;

	//값 출력
	cout << "aVal1 (float) is" << aVal1 << endl;
	cout << "aVal2 (double) is" << aVal2 << endl;


	//사이즈
	cout << "aVal1 (float) size is" << sizeof(aVal1) << endl;
	cout << "aVal2 (double) size is" << sizeof(aVal2) << endl;
}