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

	// std::sort로 Vector안에 있는 Cents 클래스 들을 비교하기 위한 less than operator 오버로딩 implementation.
	friend bool operator < (const Cents &c1, const Cents &c2) {
		//return c1.m_cents < c2.m_cents;	//Ascending Sort
		return c1.m_cents > c2.m_cents;	//Descending Sort
	}

	int& get_Cents() {
		return this->m_cents;
	}
	
	//산술 연산자 오버로딩에서 인자에 다른 클래스의 인스턴스를 인자로 받을 경우 friend 함수가 된다.
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

	//Cents들 끼리 비교하기 위한 비교연산자를 오버로딩 해줘야 한다.
	std::sort(begin(arr), end(arr));

	for (auto &e : arr) {
		cout << e << " ";
	}
	cout << endl;

	return 0;
}