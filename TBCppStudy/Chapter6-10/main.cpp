#include <iostream>

using namespace std;

const char* getName()
{
	return "Jack jack";
}

int main() 
{
	////��ȣ�� ��� const char ptr
	//				//Pra1. �ʳ� name�̶� name2�� ������ �����ϱ� �޸𸮰����� ���� ���.
	//const char *name = "Jack jack";
	//const char *name2 = "Jack jack";


	//cout << (uintptr_t)name << endl;
	//cout << (uintptr_t)name2 << endl;
	//				//Pra1-1. �ѱ��ڸ� Ʋ���� �ٸ� �޸� �ּҸ� ������.

	//const char *name3 = "Jack jacks";
	//cout << (uintptr_t)name3 << endl;

	//				//Pra2. 
	//int intarr[] = {1,2,3,4,5};
	//char chararr[] = "Hello, World!";
	//const char *name = "Jack jack";
	//char *name1 = "Jack jack";

	//cout << intarr << endl;
	//cout << chararr << endl;
	//cout << &name << endl;

	//				//Pra3.
	//char c =  'Q';
	//cout << c << endl;

	return 0;
}