#include <iostream>

using namespace std;
//��ȣ ������() �� �����ε��ؼ� �Լ� ��üó�� ����ϴ� ���..

class Accumulator{
private:
	int m_cnt = 0;

public:
	int operator() (const int &i) {
		return (m_cnt += i);
		//m_cnt�� i��ŭ ������Ű�� �� ���� ���� ��Ű�� ������ ��.
	}
};
int main() {
	Accumulator acc;

	//Functor
	cout << acc(10) << endl;
	cout << acc(20) << endl;	//Accumulation.

	return 0;
}