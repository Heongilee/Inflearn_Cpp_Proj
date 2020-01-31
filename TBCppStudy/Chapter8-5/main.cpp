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
		: Employee(0, name, dept, 1000)	//위임 생성자	(밑에 있는 생성자를 호출)
	{}
	Employee(const int &id, const string &name, const string &dept, const int &salary) 
		: id(id)
		, name(name)
		, dept(dept)
		, salary(salary)	//이 걸로
	{
		/*	생략 가능
		this-> id = id;
		this-> name = name;
		this-> dept = dept;
		this->salary = salary;
		*/
	}

	// 생성자 와 초기화 함수를 분리 시키는 코딩 방식도 많이 쓰임. (좀 더 일반적)
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