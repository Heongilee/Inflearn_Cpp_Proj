#include "Singleton.h"
using namespace std;

bool Singleton::instance_Flag = false;
Singleton* Singleton::instance_ = NULL;

// �����ؾ��� ���� -->  inline �Լ��� �ϸ� �ȵ�!

//3. ��ü ������ ������ getInstance�θ� ���� ����.
Singleton * Singleton::getInstance() {
	if (!instance_) {
		instance_ = new Singleton();
		instance_->total = 0;
		instance_Flag = true;
	}

	return instance_;
}

//�Ҹ��ڷ� �÷��� ���� false�� �ٲ�.
Singleton::~Singleton() {
	instance_Flag = false;
}

void Singleton::addValue(int value) {
	total += value;
}

int Singleton::getTotalValue() {
	return total;
}
