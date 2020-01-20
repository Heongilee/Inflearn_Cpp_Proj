#include <iostream>
#include <array>
#include <functional>

using namespace std;

int func() {
	return 5;
}
int goo() {
	return 9;
}

void print_EvenNumbers(const array<int, 10> &my_arr) {
	for (auto &elem : my_arr) {
		if (elem % 2 == 0) cout << " " << elem;
	}
	cout << endl;

	return;
}
void print_OddNumbers(const array<int, 10> &my_arr) {
	for (auto &elem : my_arr) {
		if (elem % 2 != 0) cout << " " << elem;
	}
	cout << endl;

	return;
}
bool isEven(const int &x) {
	return x % 2 == 0 ? true : false;
}
bool isOdd(const int &x) {
	return x % 2 != 0 ? true : false;
}
// 함수 포인터를 파라미터마다 일일히 타이핑하기 귀찮고 가독성도 떨어질 때
//typedef bool(*BOOL_CHECK)(const int &);		//typedef를 사용해 가독성을 높인 예.
using BOOL_CHECK = bool(*)(const int &);		//using문을 사용해 가독성을 높인 예.
void printNumbers(const array<int, 10> &my_arr, BOOL_CHECK chk) {
	//짝수만 출력...
	for (auto &elem : my_arr) {
		if (chk(elem) == true) cout << " " << elem;
	}
	cout << endl;

	return;
}
typedef std::function<bool(const int&)> MY_STL_FUNCTIONAL;
void printNumbers(const array<int, 10> &my_arr, MY_STL_FUNCTIONAL chk) {
	//짝수만 출력...
	for (auto &elem : my_arr) {
		if (chk(elem) == true) cout << " " << elem;
	}
	cout << endl;

	return;
}

int main() {
	////////////////////////////////////////////////////////////////////////////////////////
	//							※	함수 포인터	※
	//	1) 개요
	//		함수도 결국에는 메모리에 적재되기 때문에 주소를 가진다.
	//
	//	2) 개념
	//		이 때, 메모리에 적재되는 것은 callee 와 caller를 가진다(함수가 수행을 마치고
	//		돌아올 주소도 가진다는 것이 핵심.)
	//
	//	3) 사용법
	//		[함수의 반환 값] (*변수명)([인자 1, 인자 2, ..., 인자 N])();
	//
	//	4)	주의사항
	//		함수 포인터 변수 선언 시, 초기화하려는 함수의 인자와 리턴 타입이 정확히 일치해야함.
	//
	////////////////////////////////////////////////////////////////////////////////////////

	//		// (0) - 모든 함수는 메모리에 적재되며 주소를 가진다.
	//cout << func << endl;


	//		// (1) - 함수 포인터 기본 사용법
	//int(*funcptr)() = func;	//func()은 함수를 실행시켜 값을 반환해온다는 뜻이므로 혼동에 주의하자.

	//cout << funcptr() << " " << funcptr << endl;

	//funcptr = goo;

	//cout << funcptr() << " " << funcptr << endl;

	
	//		// (2) - 함수 포인터를 파라미터로 주는 예시
	//array<int, 10> my_arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//////Example #1. 내 솔루션
	////void(*my_funcptr)(const array<int, 10> &);
	////
	////my_funcptr = print_EvenNumbers;
	////my_funcptr(my_arr);

	////my_funcptr = print_OddNumbers;
	////my_funcptr(my_arr);

	//////Example #2. 홍정모띠 솔루션
	////printNumbers(my_arr, isOdd);
	////printNumbers(my_arr, isEven);


			// (3) - (C++ 11 이상) STL functional
	array<int, 10> my_arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	// 기본 사용 -> #include <functional>을 추가시킨다.

	//std::function<bool(const int&)> funcptr = isEven;
	MY_STL_FUNCTIONAL funcptr = isEven;

	printNumbers(my_arr, funcptr);

	funcptr = isOdd;

	printNumbers(my_arr, funcptr);

	return 0;
}