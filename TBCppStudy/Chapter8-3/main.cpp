#include <iostream>

using namespace std;

class Fraction
{
private:
	int m_numerator;		// 분자
	int m_denominator;		// 분모 

public:
	Fraction() {
		this->m_denominator = 1;
		this->m_numerator = 2;
	}	//default 생성자

	//※ 사용자 정의 생성자를 하나 이상 만들면 default 생성자는 자동으로 사라진다.(못 씀)
	Fraction(const int &numerator = 1, const int &denominator = 1) {	//Constructor
		this->m_denominator = denominator;
		this->m_numerator = numerator;
	}

	void print() {
		cout << this->m_numerator << " / " << this->m_denominator << endl;
	}

};