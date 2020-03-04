#include <iostream>

using namespace std;

class Fraction {
private:
	int m_numerator;
	int m_denominator;

	/*
	//���ȼ��� ���̴� ���...?
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
	//�⺻ ������ ȣ��.
	Fraction tmp(1, 2);
	cout << &tmp << endl;

	return tmp;
}
int main() 
{
	Fraction f1(5, 3);

	cout << f1 << endl;

	////Copy constructor�� �����ε� �ϴ� ���.
	//Fraction f2 = f1;

	//cout << f2 << endl;

	//Fraction f3(f1);

	//cout << f3 << endl;

	//Copy constructor�� private���� �� ���.. - Example(3)
	Fraction f4(Fraction(3, 10));

	//�����Ϸ��� �Ǵ��ؼ� �͸�ü�� Copy constructor ȣ���� �� �Ѵ�. ��,
	//Fraction f4(3, 10);���� �о���δ�.
	cout << f4 << endl;

	//doSth���� �Ѿ�� ���۷��� ��ü�� result�� ����ǹǷ� Copy constructor�� ȣ���� �ȴ�.
	//������ ��忡���� Copy constructor�� ȣ���� �ȵȴ�. -> ��ȯ�� ����ȭ(Return value optimization. (�ٿ���, RVO ��� ��.))
	Fraction result = doSth();

	cout << &result << endl;
	cout << result << endl;

	return 0;
}