#include <iostream>
#include <cassert>	//assert()를 사용하기 위함. 디버깅 에러를 막기 위함.
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
	//인자에 대한 제약은 없다. (Key가 string이 될 수도 있음.)
	int& operator [] (const int idx) {
		assert(idx >= 0);
		assert(idx < 10);
		//보통, if문을 쓰는 것을 권장하지 않음. assert가 훨씬 빠르다.

		return this->m_list[idx];
	}

	//const가 붙은 경우 연산자 오버로딩..
	const int& operator [] (const int idx) const {
		assert(idx >= 0);
		assert(idx < 10);
		//보통, if문을 쓰는 것을 권장하지 않음. assert가 훨씬 빠르다.

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

	//첨자 연산자 사용법.
	/*
	my_list[3] = 10;
	cout << my_list[3] << endl;
	*/

	//const가 붙은 경우...
	/*
	cout << const_my_list[3] << endl;

	cout << my_list[3] << endl;
	*/

	//포인터로 사용 될 경우..
	//ptr_my_list[3] = 10;	//X
	(*ptr_my_list)[3] = 10;	// O

	cout << (*ptr_my_list)[3] << endl;

	return 0;
}