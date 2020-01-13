#include <iostream>
#include <cstddef>	// cstddef \ (포인터 Datatype nullptr_t )

using namespace std;

void doSomething(double *ptr)
{
	cout << "address of Pointer variable in doSomething()"<< &ptr << endl;

	if (ptr != nullptr)
	{
		cout << *ptr << endl;
	}
	else
	{
		cout << "Null ptr, do nothing" << endl;
	}
	cout << endl;
}

int main() 
{
	double *ptr{nullptr};
	double *ptr1 = nullptr; //modern C++

	doSomething(ptr);				//출력
	doSomething(nullptr);			//출력

	double d = 123.4;

	doSomething(&d);				//출력

	ptr = &d;

	doSomething(ptr);				//출력

	return 0;
}