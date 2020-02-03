#include <iostream>

using namespace std;

class Simple {
private:
	int id;
public:
	Simple(const int &id) {
		setID(id);
		/*
		this->setID(id);	//현재 주소를 가지고 있는 인스턴스에서 setID를 호출 한다는 의미
		(*this).setID(id);	와 같음
		*/

		cout << this << endl;	//자기 자신의 주소를 출력함.
	};
	void setID(const int &id) {
		this->id = id;

		return;
	}
	int getID() {
		return this->id;
	}
};

class Calc {
private:
	int val;
public:
	Calc(const int &val) {
		this->val = val;
	}
	Calc& add(const int &val) {
		this->val += val;

		return *this;	//자기 자신의 de-referencing한 것을 보내버린다.
	}
	Calc& sub(const int &val) {
		this->val -= val;

		return *this;	//자기 자신의 de-referencing한 것을 보내버린다.
	}
	Calc& mult(const int &val) {
		this->val *= val;

		return *this;	//자기 자신의 de-referencing한 것을 보내버린다.
	}
	Calc& div(const int &val) {
		this->val /= val;

		return *this;	//자기 자신의 de-referencing한 것을 보내버린다.
	}
	Calc& mod(const int &val){
		this->val %= val;

		return *this;	//자기 자신의 de-referencing한 것을 보내버린다.
	}
	void print() {
		cout << this->val << endl;
	}
};
int main() 
{
	Simple s1(1), s2(2);

	s1.setID(2);
	s2.setID(4);

	cout << &s1 << " " << &s2 << endl;

	/* Pseudo Code */
//	Simple::setID(&s1, 1);	== s1.setID(1); 

	//this 포인터를 사용하는 용법 1 :: Chaining Member Functions (실제로 쓸모가 있는가?)
	 
	Calc cal(10);

	cal.add(10).sub(1).mult(2).print();

	return 0;
}