#include <iostream>

using namespace std;

class Cents {
private :
	int m_cents;

public:
	Cents(int cents = 0) :m_cents(cents) {}

	friend std::ostream& operator << (std::ostream &os, const Cents &c1) {
		os << c1.m_cents;
		
		return os;
	}

	friend std::istream& operator >> (std::istream &is, Cents &c1) {
		is >> c1.m_cents;

		return is;
	}

	Cents operator -() const {
		return Cents(-m_cents);
	}

	bool operator !() const {
		return (m_cents != 0) ? true : false;
	}
};
int main() 
{
	Cents c1;

	cin >> c1;

	cout << c1 << endl;
	cout << -c1 << endl;
	cout << -Cents(-10) << endl;

	cout << ((!Cents(20)) ? "True" : "False") << endl;

	auto temp = !c1;

	return 0;
}