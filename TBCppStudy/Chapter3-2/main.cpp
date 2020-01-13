#include <iostream>

int __stdcall add(int a, int b) { return a + b; }

int __cdecl main() 
{
	using namespace std;
	int x = 5;
	x = x++;
	x = --x;

	cout << x << endl;
	return 0;
}