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
	P.weight = 30;			// �Ϲ����� ����ü ���

	Person &ref = P;
	ref.age = 10;
	ref.weight = 50;		// ����ü�� ���������� ���

	Person *ptr = &P;
	ptr->age = 20;
	ptr->weight = 100;		// ����ü ������ ��� ���� ������ '->'
	(*ptr).age = 30;
	(*ptr).weight = 50;		// ����ü ������ ��� (*ptr).����̸�

	cout << (uintptr_t)&P << endl;
	cout << (uintptr_t)&ref << endl;
	cout << (uintptr_t)ptr << endl;

	return 0;
}