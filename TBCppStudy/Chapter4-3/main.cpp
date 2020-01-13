#include <iostream>	// iostream \ std \ cout, endl, cin, ...s
namespace a
{
	int var(10);
}
namespace b
{
	int var(10);
}

int main() 
{
	//Using문 Syntax
	using namespace std;
	using std::cout;
	using std::endl;

	/*			// var is ambiguous
	cout << var << endl;
	*/

	//Sol 1. Global Scope Opr 이용
	cout << a::var << endl;
	cout << b::var << endl;

	//Sol 2. Nested Block 이용
	{
		using namespace a;
		cout << var << endl;
	}
	{
		using namespace b;
		cout << var << endl;
	}

}