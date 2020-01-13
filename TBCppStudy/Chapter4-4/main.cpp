#include <iostream>
auto auto_add(int x, int y) -> int;

int add(int x, int y)
{
	return x + y;
}

auto auto_add(int x, int y) -> int //Trailing
{
	return x + (double)y;
}

/*	// auto is not allowed here 
auto auto_add(auto x, auto y);
*/


int main()
{
	using namespace std;

	int a = 123;	//int 와 123은 의미가 중복된다.

	//자료형을 자기 스스로 결정하게 하는 것을 '형 추론' 이라고 한다.
	auto a = 123;
	auto d = 123.0;
	auto pi = 3.141592f;
	auto c = 1 + 2.0;	//int +double = double

	auto res1(add(1, 2));
	auto res2(auto_add(1, 2));

	return 0;

}