#include <iostream>
#include <cstdlib>

int main() 
{
	using namespace std;

	cout << "Hello, World!!" << endl;

	exit(0);	
	// OS에게 Argument 0(zero)을 넘겨주어 main에 있는 return 보다 좀 더 강하게 종료 한다는 느낌.
	// "뒤에 뭐가 오든 간에 무조건 여기서 끝내!"
	// 디버깅 할때 많이 쓰임

	cout << "This is C++ Compiler!!!" << endl;

	return 0;
}