#include <iostream>

using namespace std;

struct Person 
{
	int age;
	double weight;

};
int main() 
{
	Person P;

	P.age = 5;
	P.weight = 30;			// 일반적인 구조체 운용

	Person &ref = P;
	ref.age = 10;
	ref.weight = 50;		// 구조체형 참조변수를 사용

	Person *ptr = &P;
	ptr->age = 20;
	ptr->weight = 100;		// 구조체 포인터 사용 참조 연산자 '->'
	(*ptr).age = 30;
	(*ptr).weight = 50;		// 구조체 포인터 사용 (*ptr).멤버이름

	cout << (uintptr_t)&P << endl;
	cout << (uintptr_t)&ref << endl;
	cout << (uintptr_t)ptr << endl;

	return 0;
}