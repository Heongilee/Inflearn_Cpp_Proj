#include <iostream>

using namespace std;

//class Fraction
//{
//private:
//	int m_numerator;		// 분자
//	int m_denominator;		// 분모 
//
//public:
//	Fraction() {
//		this->m_denominator = 1;
//		this->m_numerator = 2;
//	}	//default 생성자
//
//	//※ 사용자 정의 생성자를 하나 이상 만들면 default 생성자는 자동으로 사라진다.(못 씀)
//	Fraction(const int &numerator = 1, const int &denominator = 1) {	//Constructor
//		this->m_denominator = denominator;
//		this->m_numerator = numerator;
//	}
//
//	void print() {
//		cout << this->m_numerator << " / " << this->m_denominator << endl;
//	}
//
//};

class DataBase {
private:
	class Product {
	private:
		string name;
		int price;
		string manuf;

	private:
		Product() {}
	};
public:
	Product getInstance() {
	}
};
int main() 
{
	Fraction f(1, 3);
	Fraction g;	//constructor overload ambiguity -> 둘 중에 하나를 제거 해야함.

	f.print();
	g.print();
	return 0;
}