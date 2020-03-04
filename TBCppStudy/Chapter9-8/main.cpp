#include <iostream>

using namespace std;

class Cents {
private :
	int m_cents;

public:
	Cents(const int &cents): m_cents(cents){}
	int& get_Cents() { return this->m_cents; }
	void set_Cents(const int &cents) { this->m_cents = cents; }

	operator int() {
		cout << "Cents -> int casting ..." << endl;
		return this->m_cents;
	}
};

class Dollar {
private :
	int m_dollar;

public:
	Dollar(const int& dollar) : m_dollar(dollar) {}
	int& get_dollar() { return this->m_dollar; }
	void set_dollar(const int & dollar) { this->m_dollar = dollar; }

	operator Cents() {
		cout << "Dollar -> Cents casting..." << endl;
		return Cents(m_dollar * 100);
	}
};

void printInt(const int& val) {
	cout << val << endl;

	return;
}
int main() 
{
	//		//Example 1.
	//Cents cents(7);

	////아래 3줄 전부 같은 기능.
	//int value = (int)cents;
	//value = int(cents);
	//value = static_cast<int>(cents);

	//cout << value << endl;

			//Example 2.
	Dollar dol(2);

	Cents cents = dol;

	printInt(cents);

	return 0;
}