#include <iostream>
#include <cassert>	//assert()�� ����ϱ� ����. ����� ������ ���� ����.
#include <vector>

using namespace std;

class IntList {
private:
	int m_list[10] = { 1, 2, 3, 4, 5, 6, 7, 8,  9, 10 };

public:
	void set_Item(const int& idx, const int &val) {
		m_list[idx] = val;
	}

	int& get_Item(const int& idx) {
		return this->m_list[idx];
	}

	int* get_List() {
		return this->m_list;
	}

	//subscript operator overloading..
	//���ڿ� ���� ������ ����. (Key�� string�� �� ���� ����.)
	int& operator [] (const int idx) {
		assert(idx >= 0);
		assert(idx < 10);
		//����, if���� ���� ���� �������� ����. assert�� �ξ� ������.

		return this->m_list[idx];
	}

	//const�� ���� ��� ������ �����ε�..
	const int& operator [] (const int idx) const {
		assert(idx >= 0);
		assert(idx < 10);
		//����, if���� ���� ���� �������� ����. assert�� �ξ� ������.

		return this->m_list[idx];
	}
};

int main() 
{
	IntList my_list;
	const IntList const_my_list;
	IntList* ptr_my_list = new IntList;

	/*
	l.set_Item(3, 1);
	cout << l.get_Item(3) << endl;
	l.get_List()[3] = 10;

	cout << l.get_Item(3) << endl;
	*/

	//÷�� ������ ����.
	/*
	my_list[3] = 10;
	cout << my_list[3] << endl;
	*/

	//const�� ���� ���...
	/*
	cout << const_my_list[3] << endl;

	cout << my_list[3] << endl;
	*/

	//�����ͷ� ��� �� ���..
	//ptr_my_list[3] = 10;	//X
	(*ptr_my_list)[3] = 10;	// O

	cout << (*ptr_my_list)[3] << endl;

	return 0;
}