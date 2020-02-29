#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

class Cents {
private :
	int m_cents;

public:
	Cents(int cents = 0) :m_cents(cents) {}

	// std::sort�� Vector�ȿ� �ִ� Cents Ŭ���� ���� ���ϱ� ���� less than operator �����ε� implementation.
	friend bool operator < (const Cents &c1, const Cents &c2) {
		//return c1.m_cents < c2.m_cents;	//Ascending Sort
		return c1.m_cents > c2.m_cents;	//Descending Sort
	}

	int& get_Cents() {
		return this->m_cents;
	}
	
	//��� ������ �����ε����� ���ڿ� �ٸ� Ŭ������ �ν��Ͻ��� ���ڷ� ���� ��� friend �Լ��� �ȴ�.
	friend istream& operator >> (istream &cin, Cents &c1) {
		cin >> c1.m_cents;

		return cin;
	}

	friend ostream& operator << (ostream &cout, const Cents &c1) {
		cout << c1.m_cents;

		return cout;
	}

	bool operator!() const {
		return (m_cents != 0) ? true : false;
	}

	friend string operator ==(const Cents &c1, const Cents &c2){
		return ((c1.m_cents == c2.m_cents) ? "Equal" : "Non-Equal");
	}

	friend string operator >(const Cents &c1, const Cents &c2) {
		return ((c1.m_cents > c2.m_cents) ? "c1 bigger than c2" : "c1 less or equal than c2");
	}
};
int main() 
{
	vector<Cents> arr(20);

	for (int i = 0; i < 20; i++) {
		arr[i].get_Cents() = i;
	}

	std::random_shuffle(std::begin(arr), std::end(arr));

	for (auto &e : arr) {
		cout << e << " ";
	}
	cout << endl;

	//Cents�� ���� ���ϱ� ���� �񱳿����ڸ� �����ε� ����� �Ѵ�.
	std::sort(begin(arr), end(arr));

	for (auto &e : arr) {
		cout << e << " ";
	}
	cout << endl;

	return 0;
}