/*-------------------------------------------------------------------------------------------------------------------------
						※	Encapsulation & Access Modifier(Specifier) & Access Function	※
	1. 핵심
		왜 캡슐화 하는 걸까? -> 클래스 안에서 변경사항이 생기면, 클래스 내부에서만 작업하도록 하기 위해서...
		예를 들어, public으로 된 변수명을 바꾼다던가... 그러면 소스코드에 해당하는 모든 변수들의 이름을 찾으러 다녀야 겠지
		비주얼 스튜디오의 Refactor도 잘 잡아주지 못할 때가 있다.		
		
-------------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <string>

using namespace std;
typedef class Date {
private :		// access specifier(public, private(default :: 같은 클래스의 다른 인스턴스끼리도 접근 가능.), protected)
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
		Q> 같은 클래스 이나, 다른 인스턴스인데 private 접근이 가능하다?
		A> ㅇㅇ 가능함 같은 클래스 이기 때문.
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