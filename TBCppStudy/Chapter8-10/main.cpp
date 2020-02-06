#include <iostream>

using namespace std;

class Ch_8_9_Sth {
public :
	
	/*	정적 멤버변수 특징 
	1. 초기화 X
	2. 이 클래스를 가지는 모든 인스턴스들이 멤버변수를 공유한다.
	3. 
	*/
	static int val;	
	static const int val2;
	static constexpr int val3 = 100;	//싱글톤 패턴 디자인에서 이 방법(static constexpr ... )을 사용함.
public:
	Ch_8_9_Sth() {
		
	}
	void setValue(const int &val) {
		this->val = val;
	}
	int getValue() {
		return this->val;
	}
};
//정적 멤버변수 초기화	//define in cpp(Recommended)
int Ch_8_9_Sth::val = 1;
const int Ch_8_9_Sth::val2 = 10;
//constexpr int Sth::val3 = 100000;	안됨.


class Ch_8_10_Sth {
public:
	//Example 3. static 멤버 변수의 초기화 -> inner class 에서 초기화.
//Ch_8_10_Sth() :m_val(10), s_val(1024) {}	//정적 멤버 변수는 생성자에서 초기화 안 된다. -> C++는 static 생성자는 허용 안 됨.
	class _inner {
	public:
		_inner() {
			s_val = 9876;
		}
	};

private :
	static int s_val;
	int m_val = 10;

	static _inner s_initializer;
public:

	/*	- 멤버 함수의 특징 -
	1. this 포인터를 못 쓴다. (즉, this로 접근해야하는 모든 것이 안 된다.)
	2. 일반 멤버 변수는 못쓴다.
	*/
	static int getVal() {
		return s_val;
		//return m_val;
		//return this->m_val;
	}
	
	int temp() {
		return this->s_val + this->m_val;
	}
};
int Ch_8_10_Sth::s_val = 1024;
Ch_8_10_Sth::_inner Ch_8_10_Sth::s_initializer;

int main() 
{
	Ch_8_9_Sth s1;
	Ch_8_9_Sth s2;

	//s1.setValue(2);

	//	//	Chapter 8-9. 정적 멤버 변수
	//cout << &s1.val << " " << s1.val << endl;
	//cout << &s2.val << " " << s2.val << endl;

	//cout << &s1.val2 << " " << s1.val2 << endl;
	//cout << &s2.val2 << " " << s2.val2 << endl;

	//cout << &s1.val3 << " " << s1.val3 << endl;
	//cout << &s2.val3 << " " << s2.val3 << endl;

	//	// Chapter 8-10. 정적 멤버 함수
	////Example1. 특정 인스턴스가 없을 때 private인 멤버 변수를 접근하고 싶다면...?
	//cout << Ch_8_10_Sth::getVal() << endl;	
	//
	//Ch_8_10_Sth s3;
	//cout << s1.getValue() << endl;
	//cout << s1.val << endl;

	////Example2. (함수 포인터의 확장) 멤버 함수의 포인터를 가져오기.

	///*
	//	//※ 중요! : 멤버 변수는 (따로 명시가 없으면) 각각의 인스턴스가 개별 공간을 차지하지만,
	//	//멤버 함수는 함수 포인터를 이용해 하나의 공간만을 가지고 있다.
	//	//즉, 멤버 함수는 클래스의 인스턴스들이 모두 공유하지만, 멤버 함수는 개별 공간을 가지고 있다.
	//	// non-static member function은 instance에 종속되어있다!!
	//	// 그래서 멤버 함수에서 멤버 변수 접근의 모든 this 포인터를 써야 하는데,
	//	// 프로그래머의 편의를 위해 숨겨져 있는 것 뿐이다.

	//int (Ch_8_10_Sth::*fptr1)() = &(s3.temp);	//멤버 함수 포인터 타입에다가 s3인스턴스의 멤버함수의 주소를 대입한다? (X)
	//int (Ch_8_10_Sth::*fptr1)() = &(Ch_8_10_Sth::temp);	//멤버 함수 포인터 타입에다가 Ch_8_10_Sth클래스의 멤버함수의 주소를 대입한다 (O)

	//int (Ch_8_10_Sth::*fptr2)() = &(Ch_8_10_Sth::getVal);
	//int (*fptr2)() = &(Ch_8_10_Sth::getVal);			//static member function은 클래스와 독립적이기 때문에 클래스 명시를 빼줘야 한다.
	//*/

	//int (Ch_8_10_Sth::*fptr1)() = &(Ch_8_10_Sth::temp);	//멤버 함수 포인터 타입에다가 Ch_8_10_Sth클래스의 멤버함수의 주소를 대입한다 (O)
	//cout << (s3.*fptr1)() << endl;

	//int (*fptr2)() = &(Ch_8_10_Sth::getVal);

	//cout << fptr2() << endl;

	return 0;
}