#include <iostream>
#include <cstddef>	// cstddef \ (������ Datatype nullptr_t )

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

	doSomething(ptr);				//���
	doSomething(nullptr);			//���

	double d = 123.4;

	doSomething(&d);				//���

	ptr = &d;

	doSomething(ptr);				//���

	return 0;
}