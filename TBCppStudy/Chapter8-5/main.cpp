#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
	int		id;
	string	name;
	string	dept;
	int		salary;

public:
	Employee(const string &name, const string &dept)
/*		: id(0)
		, name(name)
		, dept(dept)
		, salary(1000)	*/
		: Employee(0, name, dept, 1000)	//���� ������	(�ؿ� �ִ� �����ڸ� ȣ��)
	{}
	Employee(const int &id, const string &name, const string &dept, const int &salary) 
		: id(id)
		, name(name)
		, dept(dept)
		, salary(salary)	//�� �ɷ�
	{
		/*	���� ����
		this-> id = id;
		this-> name = name;
		this-> dept = dept;
		this->salary = salary;
		*/
	}

	// ������ �� �ʱ�ȭ �Լ��� �и� ��Ű�� �ڵ� ��ĵ� ���� ����. (�� �� �Ϲ���)
	void Init(const int &id, const string &name, const string &dept, const int &salary) {
		this->id = id;
		this->name = name;
		this->dept = dept;
		this->salary = salary;
	}

	void print() {
		cout << id << " " << name << " " << dept << " " << salary << endl;
		return;
	}
};
int main() {
	Employee e1{1, "minStar", "Development", 3000};

	Employee e2{ "Zerohyun", "HR" };

	e1.print();
	e2.print();
	return 0;
}