#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Friend : name, address, age, height, weight, ...
typedef class Friend {
public:	//Access Specifier (or Access Modifier, public, private, protected)
	string m_name;		//type1
	string address_;	//type2
	int _age;			//type3	통상, 멤버변수임을 나타내기 위해 다음과 같이 쓴다.
	double height;
	double weight;

	void print() {
		cout << "void print(const F & jj) in Friend structure" << endl;

		cout << m_name << " " << address_ << " " << _age << " " << height << " " << weight << endl;

		return;
	}
}F;
void print(const string &name, const string &address, const int &age, const double &height, const double &weight) {
	cout << "void print(const string &name, const string &address, const int &age, const double &height, const double &weight) ;" << endl;

	cout << name << " " << address << " " << age << " " << height << " " << weight << endl;

	return;
}


int main() 
{
	/*---------------------------------------------------------------------------------------------------------------
								※	Object Oriented Programming (with Class)	※
		1. 기본 개념
			* 데이터(Data)와 기능(Function)이 묶여있는 것을 오브젝트(Object) 라고 한다.

			+ 구조체에 멤버변수 추가는 C++만 된다. (C는 불가능)

		2. Structure vs Class
			* 데이터를 묶는 용도로만 사용할 때는 Structure, Access Modifier가 안 들어간다. 
			* 데이터 묶음과 여러 가지 기능 또한 묶고 싶을 때 Class

	---------------------------------------------------------------------------------------------------------------*/

	// 실제로 메모리 공간을 차지하도록 만드는 것 -> 인스턴스화 하다, instanciation
	// 실제로 구현된 변수 -> 인스턴스, instance
	F jj{"Jack jack", "Uptown", 24, 180.2, 74.1};

	cout << &jj << endl;

	vector<F> my_friends;
	my_friends.resize(2);

	for (auto &e : my_friends) {
		e.print();
	}

	return 0;
}