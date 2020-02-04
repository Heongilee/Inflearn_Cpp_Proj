#pragma once
#include "MyHeaders.h"

//Warning: 헤더파일 안에서 using namespace를 사용하면 이 안에서 include 하는 것들이 전부 영향을 받아 예상치 못한 결과를 가져옴.
//using namespace std;
class Simple {
private:
	int id;
public:
	Simple(const int &id);
	void setID(const int &id);
	int getID();
};