#include <iostream>

using namespace std;

//void pointer, generic pointer

enum Type
{
	INT,
	FLOAT,
	CHAR

};
int main() 
{
	int i = 5;
	float f = 3.0;
	char c = 'a';

	void *ptr = nullptr;

	 cout << ptr << endl;

	ptr = &i;
	ptr = &f;
	//ptr = &c; 
	
	/*cout << &c << " "<< ptr << endl;
	cout << *static_cast<float*>(ptr) << endl;*/

	Type type = FLOAT;

	cout << &f << " " << ptr << endl;
	if (type == FLOAT)
		cout << *static_cast<float*>(ptr) << endl;
	else if (type == INT)
		cout << *static_cast<int*>(ptr) << endl;
	else
		cout << *static_cast<char*>(ptr) << endl;

	return 0;
}