#include <iostream>

using namespace std;

class Sth {
public :
	
	/*	정적 멤버변수 특징 
	1. 초기화 X
	2. 이 클래스를 가지는 모든 인스턴스들이 멤버변수를 공유한다.
	3. 
	*/
	static int val;	
	static const int val2;
	static constexpr int val3 = 100;	//싱글톤 패턴 디자인에서 이 방법을 사용함.
public:
	Sth() {
		
	}
	void setValue(const int &val) {
		this->val = val;
	}
	int& getValue() {
		return this->val;
	}
};
//정적 멤버변수 초기화	//define in cpp(Recommended)
int Sth::val = 1;
const int Sth::val2 = 10;
//constexpr int Sth::val3 = 100000;	안됨.
int main() 
{
	Sth s1;
	Sth s2;

	s1.setValue(2);

	cout << &s1.getValue() << " " << s1.getValue() << endl;
	cout << &s2.getValue() << " " << s2.getValue() << endl;

	cout << &s1.val2 << " " << s1.val2 << endl;
	cout << &s2.val2 << " " << s2.val2 << endl;

	cout << &s1.val3 << " " << s1.val3 << endl;
	cout << &s2.val3 << " " << s2.val3 << endl;

	return 0;
}