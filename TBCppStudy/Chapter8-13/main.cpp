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


//�� �̰� �ű��ϴ�.
Cents add(const Cents &c1, const Cents &c2) {

	return Cents(c1.getCents() + c2.getCents());
}

int main() 
{
					// << 1 with class A
	////���� �Լ� ������ ���� ������ instance
	//A a;

	//a.print();

	////��ȸ�� instance, A(). ��, ���� �Ұ���.
	//A(1).print();

	//A(1).print_Double();


					// << 2 with class Cents
	cout << add(Cents(6), Cents(8)).getCents() << endl;

	cout << int(6) + int(8) << endl;	//������ �����ε� :: ���� �̰� type-casting ���� �۵��ұ�?

	return 0;
}