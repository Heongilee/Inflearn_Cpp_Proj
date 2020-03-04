#include <iostream>
#include <cassert>

using namespace std;

class Student {
public :
	char* m_name = nullptr;
	int m_name_length;
	int m_age;

public:
	Student(const char* name = "", const int &age = 0, const int& length = 0) :m_age(age){
		assert(name);

		m_name_length = std::strlen(name) + 1;
		m_name = new char[m_name_length];

		for (int i = 0; i < m_name_length; i++) {
			m_name[i] = name[i];
		}
	}

	~Student() {
		cout << "삭제" << endl;
		delete[] this->m_name;
	}

	//얕은 복사 방지..
	Student(const Student& src) = delete;

	//얕은 복사
	//Student(const Student& src) {
	//	this->m_name = src.m_name;
	//	this->m_age = src.m_age;
	//	this->m_name_length = src.m_name_length;
	//}

	//깊은 복사
	Student& operator = (const Student& src) {
		cout << "깊은 복사" << endl;
		this->m_name_length = src.m_name_length;

		//셀프 복사 방지
		if (this == &src) {
			return *this;
		}

		delete[] this->m_name;

		assert(this->m_name = new char[this->m_name_length]);

		for (int i = 0; i < this->m_name_length; i++)
			this->m_name[i] = src.m_name[i];

		this->m_name[this->m_name_length - 1] = '\0';
	}

	//std::ostream overloading
	friend std::ostream& operator <<(std::ostream& cout, const Student& s) {
		for (int i = 0; i < s.m_name_length; i++)
			cout << s.m_name[i];
		cout << endl;

		return cout;
	}

	friend void doSth(const Student &f);
};

void doSth(const Student &f) {
	cout << f << endl;

	return;
}
int main()
{
	Student s("heongilee");

	{
		//Student copy = s;	//약한 복사가 호출이 되고, 약한 복사는 delete키워드로 막아놨기 때문에 이렇게 쓸 수 없다.
		
		Student copy;
		copy = s;

		cout << copy;
	}
	cout << s;
	return 0;
}