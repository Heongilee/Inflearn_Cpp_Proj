#include <iostream>
#include <cassert> //assert.h
#include <array>
using namespace std;

void print_value(const array<int, 5> &my_arr, const int &idx) {
	//���� �� ������ logical and �� �� �ٿ� �ذ��ϱ⵵ ������, ��� ������ ������ Ȯ���� �ϱ� ���� ������ �и� ��ų ���� ����.
	assert(idx >= 0);
	assert(idx <= my_arr.size() - 1);

	cout << my_arr.at(idx) << endl;

	return;
}
int main() 
{
	//				// 01. ����

	////Assertion failed: false, file c:\users\gjsrl\documents\git_space\inflearn_cpp_proj\tbcppstudy\chapter7-14\main.cpp, line 7
	//assert(false);	// ����� ��忡�� ���α׷��Ӱ� ����Ʈ��� �׽�Ʈ�� �� �����ϰ� ���δ�. (��Ÿ�� �߿� �߻�)
	//				// (������ ��忡���� �ƹ��� ������ �� �Ѵ�)


	//				// 02. ���� - ���� 1
	//int n = 5;

	//// ...

	////number should be 5		// �ڸ�Ʈ(������̼�)�� ���� �ʿ� ���� assert ���.
	//assert(n == 5);				// �ڵ带 �����Ű�ٰ� '�ش� �ٿ��� n�� 5���߸� �� ���α׷��� ���� �۵��� ���̴�' ��°� ����� ��.
	//							// �� �ڹٿ��� try-catch���� ���� e.PrintStackTrace(); ���� ������ ��.


	////				// 03. ���� - ���� 2
	//array<int, 5> my_arr{ 1, 2, 3, 4, 5 };

	////Assertion failed: idx <= my_arr.size() - 1, file c:\users\gjsrl\documents\git_space\inflearn_cpp_proj\tbcppstudy\chapter7-14\main.cpp, line 8
	//print_value(my_arr, 100);	//Out of Index Bound Exception

					// 04. static_assert() - ������ Ÿ�ӿ� Ȯ���� �� �ִ�, ���� �޽����� ���α׷��Ӱ� ���� �� �ִ�.(?)
	const int x = 10;

	//assert(x == 5);	//��Ÿ���߿� ������ �߻�

	//static_assert(x == 5, "x should be 5");	//������ Ÿ�ӿ� ������ �߻�, Message: ���� ����� "x should be 5"(��)�� ���� �����߽��ϴ�.
	static_assert(x == 10, "x shoud be 10");


	return 0;
}