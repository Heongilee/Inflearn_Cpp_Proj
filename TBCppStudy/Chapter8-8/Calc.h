#pragma once	//������尡 �ߺ� include �Ǵ°��� ������ �ش�. (C���� ifndef~endif ����ϴ� �Ͱ� ���)

#include <iostream>

//Warning: ������� �ȿ��� using namespace�� ����ϸ� �� �ȿ��� include �ϴ� �͵��� ���� ������ �޾� ����ġ ���� ����� ������.
//using namespace std;
class Calc {
private:
	int val;
public:
	//�Լ� ���� ��ü�� ��� ������ ��, Ctrl+. -> Move to definition location�� �ϸ� ������ cpp������ ����� ���Ǹ� ������.

	// ���ø� ����̳� ������ �ڵ��� ��� ����� �ٵ� �׳� ���ܳ��� ��쵵 ����. (���� ���� ������ ���)
	Calc(const int &val);
	Calc& add(const int &val);
	Calc& sub(const int &val);
	Calc& mult(const int &val);
	Calc& div(const int &val);
	Calc& mod(const int &val);
	void print();
};
