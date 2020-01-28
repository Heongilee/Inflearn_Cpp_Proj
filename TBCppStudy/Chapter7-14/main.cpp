#include <iostream>
#include <cassert> //assert.h
#include <array>
using namespace std;

void print_value(const array<int, 5> &my_arr, const int &idx) {
	//밑의 두 문장을 logical and 로 한 줄에 해결하기도 하지만, 어디서 에러가 났는지 확실히 하기 위해 조건을 분리 시킬 수록 좋다.
	assert(idx >= 0);
	assert(idx <= my_arr.size() - 1);

	cout << my_arr.at(idx) << endl;

	return;
}
int main() 
{
	//				// 01. 개요

	////Assertion failed: false, file c:\users\gjsrl\documents\git_space\inflearn_cpp_proj\tbcppstudy\chapter7-14\main.cpp, line 7
	//assert(false);	// 디버그 모드에서 프로그래머가 소프트웨어를 테스트할 때 유용하게 쓰인다. (런타임 중에 발생)
	//				// (릴리즈 모드에서는 아무런 동작을 안 한다)


	//				// 02. 사용법 - 예제 1
	//int n = 5;

	//// ...

	////number should be 5		// 코멘트(어노테이션)를 남길 필요 없이 assert 사용.
	//assert(n == 5);				// 코드를 진행시키다가 '해당 줄에서 n이 5여야만 내 프로그램이 정상 작동한 것이다' 라는걸 명시한 것.
	//							// ※ 자바에서 try-catch문에 들어가는 e.PrintStackTrace(); 같은 역할을 함.


	////				// 03. 사용법 - 예제 2
	//array<int, 5> my_arr{ 1, 2, 3, 4, 5 };

	////Assertion failed: idx <= my_arr.size() - 1, file c:\users\gjsrl\documents\git_space\inflearn_cpp_proj\tbcppstudy\chapter7-14\main.cpp, line 8
	//print_value(my_arr, 100);	//Out of Index Bound Exception

					// 04. static_assert() - 컴파일 타임에 확인할 수 있다, 에러 메시지를 프로그래머가 정할 수 있다.(?)
	const int x = 10;

	//assert(x == 5);	//런타임중에 에러를 발생

	//static_assert(x == 5, "x should be 5");	//컴파일 타임에 에러를 발생, Message: 정적 어설션이 "x should be 5"(으)로 인해 실패했습니다.
	static_assert(x == 10, "x shoud be 10");


	return 0;
}