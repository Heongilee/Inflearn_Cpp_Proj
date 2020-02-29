#include <iostream>

using namespace std;

class Cents {
private:
	int m_cents;

public:
	Cents(int cents = 0) : m_cents(cents){}
	int get_Cents() const {	return this->m_cents;	}
	int& get_Cents() { return this->m_cents; }

	//friend Cents operator + (const Cents &c1, const Cents &c2) {
	//	return Cents(c1.get_Cents() + c2.get_Cents());
	//}

	Cents operator+ (const Cents &c2);
};

Cents Cents::operator+(const Cents &c2) {
	return Cents(this->m_cents + c2.m_cents);
}

//void add(const Cents &c1, const Cents &c2, Cents &c_out) {
//	// c_out.get_Cents()는 int타입 레퍼런스이기 때문에 Lvalue 가능.
//	c_out.get_Cents() = c1.get_Cents() + c2.get_Cents();
//}

int main() 
{
	Cents cents1(6);
	Cents cents2(8);

	Cents sum(0);

	//add(cents1, cents2, sum);

	// -> void add(const Cents &c1, const Cents &c2, Cents &c_out);
	//cout << sum.get_Cents() << endl;

	// -> Cents add(const Cents &c1, const Cents &c2);
	//cout << add(cents1, cents2).get_Cents() << endl;

	//
	cout << "TEST" << endl;
	cout << (cents1 + cents2 + Cents(6) + Cents(10) + Cents(10)).get_Cents() << endl;

	/*
				<<산술 연산자 오버로딩>>
		1. 삼항 연산자 오버로딩 안됨. ()?[ ]:[ ]
		2. sizeof 연산자 안됨.
		3. :: scope_operator 도 안됨.
		4. . (Member_Selection)도 안됨.
		5. .* (Member_Pointer_Selection)도 안됨.

	*/


	return 0;
}