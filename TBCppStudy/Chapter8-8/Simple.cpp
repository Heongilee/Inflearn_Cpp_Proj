#include "Simple.h"

// �� cpp������ using namespace���� �ٸ� ���Ͽ� ������ �� ���� ���� ������ ��� �����ϴ�.
using namespace std;

inline Simple::Simple(const int & id) {
	setID(id);
	/*
	this->setID(id);	//���� �ּҸ� ������ �ִ� �ν��Ͻ����� setID�� ȣ�� �Ѵٴ� �ǹ�
	(*this).setID(id);	�� ����
	*/

	cout << this << endl;	//�ڱ� �ڽ��� �ּҸ� �����.
}

inline void Simple::setID(const int & id) {
	this->id = id;

	return;
}

inline int Simple::getID() {
	return this->id;
}
