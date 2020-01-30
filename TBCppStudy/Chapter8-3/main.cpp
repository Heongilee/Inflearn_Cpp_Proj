#include <iostream>

using namespace std;

class Fraction
{
private:
	int m_numerator;		// ����
	int m_denominator;		// �и� 

public:
	Fraction() {
		this->m_denominator = 1;
		this->m_numerator = 2;
	}	//default ������

	//�� ����� ���� �����ڸ� �ϳ� �̻� ����� default �����ڴ� �ڵ����� �������.(�� ��)
	Fraction(const int &numerator = 1, const int &denominator = 1) {	//Constructor
		this->m_denominator = denominator;
		this->m_numerator = numerator;
	}

	void print() {
		cout << this->m_numerator << " / " << this->m_denominator << endl;
	}

};