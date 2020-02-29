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


	//Postfix :: 암기하거나 찾아봐서 쓰는 수 밖에 없음.
	Digit operator++ (int) {	//Dummy 인자 (int 형) 하나 넣어준다.
		Digit temp(this->m_digit);	//1. 현재 값을 일단 저장시킨다.

		++(*this);	//prefixing

		return temp;	//임시 인스턴스를 반환 (레퍼런스 반환형을 가지면 안 된다는 것에 주의!)
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