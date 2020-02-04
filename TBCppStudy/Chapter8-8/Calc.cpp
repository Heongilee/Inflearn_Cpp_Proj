#include "Calc.h"

// ※ 헤더파일에 멤버 함수의 정의를 다 적어두면, 컴파일러가 이 함수들을 inlining하고 싶다는 것으로 간주한다.
// ※ cpp파일은 using namespace문이 다른 파일에 영향을 줄 일이 없기 때문에 명시 가능하다.

using namespace std;

inline Calc::Calc(const int & val) {
	this->val = val;
}

inline Calc & Calc::add(const int & val) {
	this->val += val;

	return *this;	//자기 자신의 de-referencing한 것을 보내버린다.
}

inline Calc & Calc::sub(const int & val) {
	this->val -= val;

	return *this;	//자기 자신의 de-referencing한 것을 보내버린다.
}

inline Calc & Calc::mult(const int & val) {
	this->val *= val;

	return *this;	//자기 자신의 de-referencing한 것을 보내버린다.
}

inline Calc & Calc::div(const int & val) {
	this->val /= val;

	return *this;	//자기 자신의 de-referencing한 것을 보내버린다.
}

inline Calc & Calc::mod(const int & val) {
	this->val %= val;

	return *this;	//자기 자신의 de-referencing한 것을 보내버린다.
}

inline void Calc::print() {
	cout << this->val << endl;
}
