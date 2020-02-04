#include "Calc.h"

// �� ������Ͽ� ��� �Լ��� ���Ǹ� �� ����θ�, �����Ϸ��� �� �Լ����� inlining�ϰ� �ʹٴ� ������ �����Ѵ�.
// �� cpp������ using namespace���� �ٸ� ���Ͽ� ������ �� ���� ���� ������ ��� �����ϴ�.

using namespace std;

inline Calc::Calc(const int & val) {
	this->val = val;
}

inline Calc & Calc::add(const int & val) {
	this->val += val;

	return *this;	//�ڱ� �ڽ��� de-referencing�� ���� ����������.
}

inline Calc & Calc::sub(const int & val) {
	this->val -= val;

	return *this;	//�ڱ� �ڽ��� de-referencing�� ���� ����������.
}

inline Calc & Calc::mult(const int & val) {
	this->val *= val;

	return *this;	//�ڱ� �ڽ��� de-referencing�� ���� ����������.
}

inline Calc & Calc::div(const int & val) {
	this->val /= val;

	return *this;	//�ڱ� �ڽ��� de-referencing�� ���� ����������.
}

inline Calc & Calc::mod(const int & val) {
	this->val %= val;

	return *this;	//�ڱ� �ڽ��� de-referencing�� ���� ����������.
}

inline void Calc::print() {
	cout << this->val << endl;
}
