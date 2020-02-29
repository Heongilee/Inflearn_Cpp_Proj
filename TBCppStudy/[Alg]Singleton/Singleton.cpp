#include "Singleton.h"
using namespace std;

bool Singleton::instance_Flag = false;
Singleton* Singleton::instance_ = NULL;

// 주의해야할 사항 -->  inline 함수로 하면 안됨!

//3. 객체 생성은 오로지 getInstance로만 접근 가능.
Singleton * Singleton::getInstance() {
	if (!instance_) {
		instance_ = new Singleton();
		instance_->total = 0;
		instance_Flag = true;
	}

	return instance_;
}

//소멸자로 플래그 변수 false로 바꿈.
Singleton::~Singleton() {
	instance_Flag = false;
}

void Singleton::addValue(int value) {
	total += value;
}

int Singleton::getTotalValue() {
	return total;
}
