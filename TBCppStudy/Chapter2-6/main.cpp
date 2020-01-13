#include <iostream>

bool isEqual(int a, int b)
{
	return (a == b) ? 1 : 0;
}

int main() 
{
	using namespace std;

	bool b1 = true;
	bool b2(false);
	bool b3{ true };
	b3 = false;

	//		//Pra1.
	//cout << boolalpha;
	//cout << b3 << endl;
	//cout << b1 << endl;
	//

	//		//Pra2.
	//cout << boolalpha;
	//cout << isEqual(1, 1) << endl;
	//cout << isEqual(1, 1) << endl;



	return 0;
}