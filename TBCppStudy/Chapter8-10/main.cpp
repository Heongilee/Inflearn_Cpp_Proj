#include <iostream>

using namespace std;

class Ch_8_9_Sth {
public :
	
	/*	���� ������� Ư¡ 
	1. �ʱ�ȭ X
	2. �� Ŭ������ ������ ��� �ν��Ͻ����� ��������� �����Ѵ�.
	3. 
	*/
	static int val;	
	static const int val2;
	static constexpr int val3 = 100;	//�̱��� ���� �����ο��� �� ���(static constexpr ... )�� �����.
public:
	Ch_8_9_Sth() {
		
	}
	void setValue(const int &val) {
		this->val = val;
	}
	int getValue() {
		return this->val;
	}
};
//���� ������� �ʱ�ȭ	//define in cpp(Recommended)
int Ch_8_9_Sth::val = 1;
const int Ch_8_9_Sth::val2 = 10;
//constexpr int Sth::val3 = 100000;	�ȵ�.


class Ch_8_10_Sth {
public:
	//Example 3. static ��� ������ �ʱ�ȭ -> inner class ���� �ʱ�ȭ.
//Ch_8_10_Sth() :m_val(10), s_val(1024) {}	//���� ��� ������ �����ڿ��� �ʱ�ȭ �� �ȴ�. -> C++�� static �����ڴ� ��� �� ��.
	class _inner {
	public:
		_inner() {
			s_val = 9876;
		}
	};

private :
	static int s_val;
	int m_val = 10;

	static _inner s_initializer;
public:

	/*	- ��� �Լ��� Ư¡ -
	1. this �����͸� �� ����. (��, this�� �����ؾ��ϴ� ��� ���� �� �ȴ�.)
	2. �Ϲ� ��� ������ ������.
	*/
	static int getVal() {
		return s_val;
		//return m_val;
		//return this->m_val;
	}
	
	int temp() {
		return this->s_val + this->m_val;
	}
};
int Ch_8_10_Sth::s_val = 1024;
Ch_8_10_Sth::_inner Ch_8_10_Sth::s_initializer;

int main() 
{
	Ch_8_9_Sth s1;
	Ch_8_9_Sth s2;

	//s1.setValue(2);

	//	//	Chapter 8-9. ���� ��� ����
	//cout << &s1.val << " " << s1.val << endl;
	//cout << &s2.val << " " << s2.val << endl;

	//cout << &s1.val2 << " " << s1.val2 << endl;
	//cout << &s2.val2 << " " << s2.val2 << endl;

	//cout << &s1.val3 << " " << s1.val3 << endl;
	//cout << &s2.val3 << " " << s2.val3 << endl;

	//	// Chapter 8-10. ���� ��� �Լ�
	////Example1. Ư�� �ν��Ͻ��� ���� �� private�� ��� ������ �����ϰ� �ʹٸ�...?
	//cout << Ch_8_10_Sth::getVal() << endl;	
	//
	//Ch_8_10_Sth s3;
	//cout << s1.getValue() << endl;
	//cout << s1.val << endl;

	////Example2. (�Լ� �������� Ȯ��) ��� �Լ��� �����͸� ��������.

	///*
	//	//�� �߿�! : ��� ������ (���� ��ð� ������) ������ �ν��Ͻ��� ���� ������ ����������,
	//	//��� �Լ��� �Լ� �����͸� �̿��� �ϳ��� �������� ������ �ִ�.
	//	//��, ��� �Լ��� Ŭ������ �ν��Ͻ����� ��� ����������, ��� �Լ��� ���� ������ ������ �ִ�.
	//	// non-static member function�� instance�� ���ӵǾ��ִ�!!
	//	// �׷��� ��� �Լ����� ��� ���� ������ ��� this �����͸� ��� �ϴµ�,
	//	// ���α׷����� ���Ǹ� ���� ������ �ִ� �� ���̴�.

	//int (Ch_8_10_Sth::*fptr1)() = &(s3.temp);	//��� �Լ� ������ Ÿ�Կ��ٰ� s3�ν��Ͻ��� ����Լ��� �ּҸ� �����Ѵ�? (X)
	//int (Ch_8_10_Sth::*fptr1)() = &(Ch_8_10_Sth::temp);	//��� �Լ� ������ Ÿ�Կ��ٰ� Ch_8_10_SthŬ������ ����Լ��� �ּҸ� �����Ѵ� (O)

	//int (Ch_8_10_Sth::*fptr2)() = &(Ch_8_10_Sth::getVal);
	//int (*fptr2)() = &(Ch_8_10_Sth::getVal);			//static member function�� Ŭ������ �������̱� ������ Ŭ���� ��ø� ����� �Ѵ�.
	//*/

	//int (Ch_8_10_Sth::*fptr1)() = &(Ch_8_10_Sth::temp);	//��� �Լ� ������ Ÿ�Կ��ٰ� Ch_8_10_SthŬ������ ����Լ��� �ּҸ� �����Ѵ� (O)
	//cout << (s3.*fptr1)() << endl;

	//int (*fptr2)() = &(Ch_8_10_Sth::getVal);

	//cout << fptr2() << endl;

	return 0;
}