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
// �Լ� �����͸� �Ķ���͸��� ������ Ÿ�����ϱ� ������ �������� ������ ��
//typedef bool(*BOOL_CHECK)(const int &);		//typedef�� ����� �������� ���� ��.
using BOOL_CHECK = bool(*)(const int &);		//using���� ����� �������� ���� ��.
void printNumbers(const array<int, 10> &my_arr, BOOL_CHECK chk) {
	//¦���� ���...
	for (auto &elem : my_arr) {
		if (chk(elem) == true) cout << " " << elem;
	}
	cout << endl;

	return;
}
typedef std::function<bool(const int&)> MY_STL_FUNCTIONAL;
void printNumbers(const array<int, 10> &my_arr, MY_STL_FUNCTIONAL chk) {
	//¦���� ���...
	for (auto &elem : my_arr) {
		if (chk(elem) == true) cout << " " << elem;
	}
	cout << endl;

	return;
}

int main() {
	////////////////////////////////////////////////////////////////////////////////////////
	//							��	�Լ� ������	��
	//	1) ����
	//		�Լ��� �ᱹ���� �޸𸮿� ����Ǳ� ������ �ּҸ� ������.
	//
	//	2) ����
	//		�� ��, �޸𸮿� ����Ǵ� ���� callee �� caller�� ������(�Լ��� ������ ��ġ��
	//		���ƿ� �ּҵ� �����ٴ� ���� �ٽ�.)
	//
	//	3) ����
	//		[�Լ��� ��ȯ ��] (*������)([���� 1, ���� 2, ..., ���� N])();
	//
	//	4)	���ǻ���
	//		�Լ� ������ ���� ���� ��, �ʱ�ȭ�Ϸ��� �Լ��� ���ڿ� ���� Ÿ���� ��Ȯ�� ��ġ�ؾ���.
	//
	////////////////////////////////////////////////////////////////////////////////////////

	//		// (0) - ��� �Լ��� �޸𸮿� ����Ǹ� �ּҸ� ������.
	//cout << func << endl;


	//		// (1) - �Լ� ������ �⺻ ����
	//int(*funcptr)() = func;	//func()�� �Լ��� ������� ���� ��ȯ�ؿ´ٴ� ���̹Ƿ� ȥ���� ��������.

	//cout << funcptr() << " " << funcptr << endl;

	//funcptr = goo;

	//cout << funcptr() << " " << funcptr << endl;

	
	//		// (2) - �Լ� �����͸� �Ķ���ͷ� �ִ� ����
	//array<int, 10> my_arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//////Example #1. �� �ַ��
	////void(*my_funcptr)(const array<int, 10> &);
	////
	////my_funcptr = print_EvenNumbers;
	////my_funcptr(my_arr);

	////my_funcptr = print_OddNumbers;
	////my_funcptr(my_arr);

	//////Example #2. ȫ����� �ַ��
	////printNumbers(my_arr, isOdd);
	////printNumbers(my_arr, isEven);


			// (3) - (C++ 11 �̻�) STL functional
	array<int, 10> my_arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	// �⺻ ��� -> #include <functional>�� �߰���Ų��.

	//std::function<bool(const int&)> funcptr = isEven;
	MY_STL_FUNCTIONAL funcptr = isEven;

	printNumbers(my_arr, funcptr);

	funcptr = isOdd;

	printNumbers(my_arr, funcptr);

	return 0;
}