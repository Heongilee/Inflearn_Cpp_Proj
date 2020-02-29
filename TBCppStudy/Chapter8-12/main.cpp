#include <iostream>

using namespace std;

class A;

class B {
private:
	int val = 2;

public:
	void doSth(A& a);
};

class A {
private:
	int val = 1;

	friend void B::doSth(A& a);	//�ش� Ŭ������ ��� �Լ��� friend ����.
};

void B::doSth(A& a)	
//Ŭ���� ��� �Լ��� friend�� �����ų ��, ��� ���� ���� �� ������ �� �� �ֱ� ������, 
//Declaration �� Definition�� �и��������.
{
	cout << a.val << endl;
}

int main() 
{
	A a;
	B b;

	b.doSth(a);

	return 0;
}