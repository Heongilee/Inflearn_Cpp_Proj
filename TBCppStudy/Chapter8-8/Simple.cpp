#include "Simple.h"

// ※ cpp파일은 using namespace문이 다른 파일에 영향을 줄 일이 없기 때문에 명시 가능하다.
using namespace std;

inline Simple::Simple(const int & id) {
	setID(id);
	/*
	this->setID(id);	//현재 주소를 가지고 있는 인스턴스에서 setID를 호출 한다는 의미
	(*this).setID(id);	와 같음
	*/

	cout << this << endl;	//자기 자신의 주소를 출력함.
}

inline void Simple::setID(const int & id) {
	this->id = id;

	return;
}

inline int Simple::getID() {
	return this->id;
}
