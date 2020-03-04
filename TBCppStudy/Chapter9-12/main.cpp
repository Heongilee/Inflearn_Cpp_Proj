#include <iostream>
#include <cassert>
#include <initializer_list> 

using namespace std;
class Int_Arr {
private:
	unsigned int m_length;
	int* m_arr = nullptr;

public:
	Int_Arr(const unsigned int& length = 0) :m_length(length) {
		assert(this->m_arr = new int[length]);
	}
	
	//�̴ϼȶ����� ����Ʈ�� ���ڷ� ������ �����ڿ��� ���� �����ڸ� ȣ���ϰ� �ִ�.
	//�� �̴ϼȶ����� ����Ʈ�� �迭 ������ ���� ����. (for-each�� ������ ��.)
	// iterator ����� ���� ���� in STL
	Int_Arr(const std::initializer_list<int> &arr) :Int_Arr(arr.size()) {
		int cnt = 0;
		for (auto & e : arr) {
			this->m_arr[cnt++] = e;
		}
	}

	Int_Arr& operator =(const Int_Arr &src) {
		assert(src.m_arr);

		if (this == &src) {
			return *this;
		}

		delete[] this->m_arr;

		this->m_arr = new int[src.m_length];

		for (int i = 0; i < src.m_length; i++)
			this->m_arr[i] = src.m_arr[i];
	}

	friend std::ostream& operator <<(std::ostream& cout, const Int_Arr& a) {
		for (int i = 0; i < a.m_length; i++)
			cout << a.m_arr[i];
		cout << endl;

		return cout;
	}

	~Int_Arr() {
		delete[] this->m_arr;
	}
};
int main() 
{
	//�̴ϼȶ����� ����Ʈ
	auto il = { 10, 20, 30, 40, 50 };

	Int_Arr arr { 1, 2 ,3, 4, 5 };

	cout << arr << endl;

	return 0;
}