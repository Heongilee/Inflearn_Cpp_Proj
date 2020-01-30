/*-------------------------------------------------------------------------------------------------------------------------
						��	Encapsulation & Access Modifier(Specifier) & Access Function	��
	1. �ٽ�
		�� ĸ��ȭ �ϴ� �ɱ�? -> Ŭ���� �ȿ��� ��������� �����, Ŭ���� ���ο����� �۾��ϵ��� �ϱ� ���ؼ�...
		���� ���, public���� �� �������� �ٲ۴ٴ���... �׷��� �ҽ��ڵ忡 �ش��ϴ� ��� �������� �̸��� ã���� �ٳ�� ����
		���־� ��Ʃ����� Refactor�� �� ������� ���� ���� �ִ�.		
		
-------------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <string>

using namespace std;
typedef class Date {
private :		// access specifier(public, private(default :: ���� Ŭ������ �ٸ� �ν��Ͻ������� ���� ����.), protected)
	int year;
	int month;
	int day;

public:	
	//Access Function
	void setDate(const int &year, const int &month, const int &day) {
		this->year = year;
		this->month = month;
		this->day = day;

		return;
	}
	void copyFrom(const Date &date) {
		this->year = date.year;
		this->month = date.month;
		this->day = date.day;

		/*---------------------------------
		Q> ���� Ŭ���� �̳�, �ٸ� �ν��Ͻ��ε� private ������ �����ϴ�?
		A> ���� ������ ���� Ŭ���� �̱� ����.
		---------------------------------*/
		
		return;
	}
	//setter
	void setMonth(const int &month) {
		this->month = month;
		return;
	}
	//getter
	const int& getYear() {
		return this->year;
	}
	const int& getMonth() {
		return this->month;
	}
	const int& getDay() {
		return this->day;
	}
}D;
int main() 
{
	D today;
	today.setDate(2020, 01, 29);

	D copy;
	today.copyFrom(today);
	return 0;
}