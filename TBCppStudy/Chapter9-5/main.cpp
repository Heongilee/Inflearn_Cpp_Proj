#include <iostream>

using namespace std;

class Digit {
private :
	int m_digit;

public:
	Digit(int digit = 0) : m_digit(digit) {}
	
	//prefix
	Digit& operator++ () {
		++(this->m_digit);

		return *this;
	}


	//Postfix :: �ϱ��ϰų� ã�ƺ��� ���� �� �ۿ� ����.
	Digit operator++ (int) {	//Dummy ���� (int ��) �ϳ� �־��ش�.
		Digit temp(this->m_digit);	//1. ���� ���� �ϴ� �����Ų��.

		++(*this);	//prefixing

		return temp;	//�ӽ� �ν��Ͻ��� ��ȯ (���۷��� ��ȯ���� ������ �� �ȴٴ� �Ϳ� ����!)
	}

	friend std::ostream& operator << (std::ostream &cout, const Digit &d1) {
		cout << d1.m_digit;

		return cout;
	}
};
int main() 
{
	Digit d(10);

	cout << ++d << endl;	//11
	cout << d++ << endl;	//11
	cout << d << endl;		//12


	return 0;
}