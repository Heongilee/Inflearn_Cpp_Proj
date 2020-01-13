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
	//Using�� Syntax
	using namespace std;
	using std::cout;
	using std::endl;

	/*			// var is ambiguous
	cout << var << endl;
	*/

	//Sol 1. Global Scope Opr �̿�
	cout << a::var << endl;
	cout << b::var << endl;

	//Sol 2. Nested Block �̿�
	{
		using namespace a;
		cout << var << endl;
	}
	{
		using namespace b;
		cout << var << endl;
	}

}