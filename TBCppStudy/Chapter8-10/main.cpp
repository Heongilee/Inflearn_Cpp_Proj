#include <iostream>

using namespace std;

class Sth {
public :
	
	/*	���� ������� Ư¡ 
	1. �ʱ�ȭ X
	2. �� Ŭ������ ������ ��� �ν��Ͻ����� ��������� �����Ѵ�.
	3. 
	*/
	static int val;	
	static const int val2;
	static constexpr int val3 = 100;	//�̱��� ���� �����ο��� �� ����� �����.
public:
	Sth() {
		
	}
	void setValue(const int &val) {
		this->val = val;
	}
	int& getValue() {
		return this->val;
	}
};
//���� ������� �ʱ�ȭ	//define in cpp(Recommended)
int Sth::val = 1;
const int Sth::val2 = 10;
//constexpr int Sth::val3 = 100000;	�ȵ�.
int main() 
{
	Sth s1;
	Sth s2;

	s1.setValue(2);

	cout << &s1.getValue() << " " << s1.getValue() << endl;
	cout << &s2.getValue() << " " << s2.getValue() << endl;

	cout << &s1.val2 << " " << s1.val2 << endl;
	cout << &s2.val2 << " " << s2.val2 << endl;

	cout << &s1.val3 << " " << s1.val3 << endl;
	cout << &s2.val3 << " " << s2.val3 << endl;

	return 0;
}