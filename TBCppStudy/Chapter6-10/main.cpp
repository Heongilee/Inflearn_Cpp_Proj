#include <iostream>

using namespace std;

const char* getName()
{
	return "Jack jack";
}

int main() 
{
	////기호적 상수 const char ptr
	//				//Pra1. 너네 name이랑 name2는 어차피 같으니까 메모리공간도 같이 써라.
	//const char *name = "Jack jack";
	//const char *name2 = "Jack jack";


	//cout << (uintptr_t)name << endl;
	//cout << (uintptr_t)name2 << endl;
	//				//Pra1-1. 한글자만 틀려도 다른 메모리 주소를 가진다.

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