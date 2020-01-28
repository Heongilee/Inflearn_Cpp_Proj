#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Friend : name, address, age, height, weight, ...
typedef class Friend {
public:	//Access Specifier (or Access Modifier, public, private, protected)
	string m_name;		//type1
	string address_;	//type2
	int _age;			//type3	���, ����������� ��Ÿ���� ���� ������ ���� ����.
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
								��	Object Oriented Programming (with Class)	��
		1. �⺻ ����
			* ������(Data)�� ���(Function)�� �����ִ� ���� ������Ʈ(Object) ��� �Ѵ�.

			+ ����ü�� ������� �߰��� C++�� �ȴ�. (C�� �Ұ���)

		2. Structure vs Class
			* �����͸� ���� �뵵�θ� ����� ���� Structure, Access Modifier�� �� ����. 
			* ������ ������ ���� ���� ��� ���� ���� ���� �� Class

	---------------------------------------------------------------------------------------------------------------*/

	// ������ �޸� ������ �����ϵ��� ����� �� -> �ν��Ͻ�ȭ �ϴ�, instanciation
	// ������ ������ ���� -> �ν��Ͻ�, instance
	F jj{"Jack jack", "Uptown", 24, 180.2, 74.1};

	cout << &jj << endl;

	vector<F> my_friends;
	my_friends.resize(2);

	for (auto &e : my_friends) {
		e.print();
	}

	return 0;
}