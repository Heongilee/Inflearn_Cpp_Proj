#include <iostream>

using namespace std;

class Simple {
private:
	int id;
public:
	Simple(const int &id) {
		setID(id);
		/*
		this->setID(id);	//���� �ּҸ� ������ �ִ� �ν��Ͻ����� setID�� ȣ�� �Ѵٴ� �ǹ�
		(*this).setID(id);	�� ����
		*/

		cout << this << endl;	//�ڱ� �ڽ��� �ּҸ� �����.
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

		return *this;	//�ڱ� �ڽ��� de-referencing�� ���� ����������.
	}
	Calc& sub(const int &val) {
		this->val -= val;

		return *this;	//�ڱ� �ڽ��� de-referencing�� ���� ����������.
	}
	Calc& mult(const int &val) {
		this->val *= val;

		return *this;	//�ڱ� �ڽ��� de-referencing�� ���� ����������.
	}
	Calc& div(const int &val) {
		this->val /= val;

		return *this;	//�ڱ� �ڽ��� de-referencing�� ���� ����������.
	}
	Calc& mod(const int &val){
		this->val %= val;

		return *this;	//�ڱ� �ڽ��� de-referencing�� ���� ����������.
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

	//this �����͸� ����ϴ� ��� 1 :: Chaining Member Functions (������ ���� �ִ°�?)
	 
	Calc cal(10);

	cal.add(10).sub(1).mult(2).print();

	return 0;
}