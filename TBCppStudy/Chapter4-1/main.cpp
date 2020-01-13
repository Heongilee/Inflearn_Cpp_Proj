#include <iostream>

namespace work1::work11::work111	//(C++ 17부터 추가된 기능.)
{
	int a;
	void doSomething()
	{
		a += 3;
		return;
	}
}

namespace work2
{
	int a;
	void doSomething()
	{
		a += 5;
	}
}


int main() 
{
	using namespace std;

	work1::a;
	work1::doSomething();

	work2::a;
	work2::doSomething();

	return 0;
}

