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

	friend void B::doSth(A& a);	//해당 클래스의 멤버 함수에 friend 적용.
};

void B::doSth(A& a)	
//클래스 멤버 함수에 friend를 적용시킬 때, 멤버 변수 접근 시 에러가 뜰 수 있기 때문에, 
//Declaration 과 Definition을 분리시켜줬다.
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