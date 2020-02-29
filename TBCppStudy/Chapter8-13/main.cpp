#include <iostream>

using namespace std;

class A {

public:
	int val;

	void print() {
		cout << this->val << endl;
	}

	void print_Double() {
		cout << this->val * 2 << endl;
	}

	A(const int& val) {
		this->val = val;
		cout << "Constructor" << endl;
	}

	~A() {
		cout << "Destructor" << endl;
	}
};

class Cents {
private:
	int cents;

public:
	Cents(const int& cents) {
		this->cents = cents;
	}
	
	void setCents(const int& cents) {
		this->cents = cents;
	}

	int getCents() const {
		return this->cents;
	}
};


//오 이거 신기하다.
Cents add(const Cents &c1, const Cents &c2) {

	return Cents(c1.getCents() + c2.getCents());
}

int main() 
{
					// << 1 with class A
	////메인 함수 내에서 재사용 가능한 instance
	//A a;

	//a.print();

	////일회성 instance, A(). 즉, 재사용 불가능.
	//A(1).print();

	//A(1).print_Double();


					// << 2 with class Cents
	cout << add(Cents(6), Cents(8)).getCents() << endl;

	cout << int(6) + int(8) << endl;	//연산자 오버로딩 :: 과연 이게 type-casting 으로 작동할까?

	return 0;
}