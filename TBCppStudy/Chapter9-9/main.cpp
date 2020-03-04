#include <iostream>

using namespace std;

class Fraction {
private:
	int m_numerator;
	int m_denominator;

	/*
	//보안성을 높이는 방법...?
	Fraction(const Fraction& src) : m_numerator(src.m_numerator), m_denominator(src.m_denominator) {
		cout << "Copy constructor called" << endl;
	}
	*/

public:
	Fraction(const int &numerator, const int &denominator) : m_numerator(numerator), m_denominator(denominator) {}

	//Copy constructor - Ex 1, 2
	Fraction(const Fraction& src) : m_numerator(src.m_numerator), m_denominator(src.m_denominator) {
		cout << "Copy constructor called" << endl;
	}

	friend std::ostream& operator << (std::ostream& cout, const Fraction& f) {
		cout << f.m_denominator << " / " << f.m_numerator << endl;

		return cout;
	}
};

Fraction doSth(){
	//기본 생성자 호출.
	Fraction tmp(1, 2);
	cout << &tmp << endl;

	return tmp;
}
int main() 
{
	Fraction f1(5, 3);

	cout << f1 << endl;

	////Copy constructor를 오버로딩 하는 방법.
	//Fraction f2 = f1;

	//cout << f2 << endl;

	//Fraction f3(f1);

	//cout << f3 << endl;

	//Copy constructor를 private으로 둔 경우.. - Example(3)
	Fraction f4(Fraction(3, 10));

	//컴파일러가 판단해서 익명객체의 Copy constructor 호출을 안 한다. 즉,
	//Fraction f4(3, 10);으로 읽어들인다.
	cout << f4 << endl;

	//doSth에서 넘어온 레퍼런스 객체가 result로 복사되므로 Copy constructor가 호출이 된다.
	//릴리즈 모드에서는 Copy constructor가 호출이 안된다. -> 반환값 최적화(Return value optimization. (줄여서, RVO 라고 함.))
	Fraction result = doSth();

	cout << &result << endl;
	cout << result << endl;

	return 0;
}