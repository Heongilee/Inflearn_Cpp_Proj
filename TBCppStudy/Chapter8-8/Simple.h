#pragma once
#include "MyHeaders.h"

//Warning: ������� �ȿ��� using namespace�� ����ϸ� �� �ȿ��� include �ϴ� �͵��� ���� ������ �޾� ����ġ ���� ����� ������.
//using namespace std;
class Simple {
private:
	int id;
public:
	Simple(const int &id);
	void setID(const int &id);
	int getID();
};