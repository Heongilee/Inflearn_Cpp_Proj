#include <iostream>
#include <cassert>

using namespace std;

class Fra {
private:
	int m_den;	//�и�
	int m_num;	//����

public:
	//deleteŰ���带 ����ϸ� char Ÿ���� ���ڷ� ������ ȣ���� �ȵȴ�. :: ����� ���α׷��� ���.
	Fra(char) = delete;

	explicit Fra(const int &den = 0, const int &num = 1) : m_den(den), m_num(num) {
		assert(den != 0);
	}

	Fra(const Fra& src) : m_den(src.m_den), m_num(src.m_num) {}

	friend std::ostream& operator << (std::ostream& cout, const Fra & f) {
		cout << f.m_num << " / " << f.m_den << endl;

		return cout;
	}

};

void doSth(const Fra& f) {
	cout << f << endl;

	return;
}
int main() {
	Fra f(7);	// 1 / 7

	// 1 / 7
	//doSth(f);

	//Converting constructor -> ��ġ doSth(Fra(7)); ó�� �о� ����. (explicit( : a. �����) Ű���带 ����� �����ڿ��� �� ������.)
	//doSth(7);		//-> explicit Ű���� �� ���.
	doSth(Fra(7));	//-> explicit Ű���� ���.

	//doSth(Fra('c'));	//-> delete Ű���� �� ���.
	

	return 0;
}