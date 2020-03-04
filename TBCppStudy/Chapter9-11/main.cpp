#include <iostream>
#include <cassert>

using namespace std;

class Mystring {
public :
	char* m_data = nullptr;
	int m_leng;

public:
	Mystring& operator = (const Mystring& src) {
		cout << "Assignment operator" << endl;

		//자기한테 대입하는 연산을 막기 위함.
		if (this == &src) {
			return *this;
		}
		
		//갖고 있는 걸 지우고.
		delete[] m_data;

		//다시 할당 받아 복사함.
		m_leng = src.m_leng;

		if (src.m_data != nullptr) {
			m_data = new char[m_leng];

			for (int i = 0; i < m_leng; i++)
				m_data[i] = src.m_data[i];
		}
		else
			m_data = nullptr;
	}
	Mystring(const Mystring &src) :m_leng(src.m_leng){
		cout << "Copy constructor called" << endl;
		
		if (src.m_data != nullptr) {
			this->m_data = new char[m_leng];

			for (int i = 0; i < m_leng; i++) {
				this->m_data[i] = src.m_data[i];
			}
		}
		else
			this->m_data = nullptr;
	}
	Mystring(const char* src = "") {
		cout << "Constructor called" << endl;

		assert(src);

		this->m_leng = std::strlen(src) + 1;

		this->m_data = new char[m_leng];
		for (int i = 0; i < m_leng; i++) {
			this->m_data[i] = src[i];
		}

		this->m_data[m_leng - 1] = '\0';
	}

	~Mystring() {
		cout << "deconstructor called " << endl;
		delete[] this->m_data;

		this->m_data = nullptr;
	}

	char* getString() {
		assert(this->m_data);

		return this->m_data;
	}

};
int main() {
	Mystring hello("hello");
	
	//Copy constructor가 호출됨.
	Mystring str1 = "hello";

	//Assignment constructor가 호출 됨.
	Mystring str2;
	str2 = hello;

	cout << (int*)hello.m_data << endl;
	cout << hello.getString() << endl;

	{
		Mystring copy = hello;	//컴파일러가 가지고 있는 기본 복사 생성자 호출.(주소 복사가 일어남.)
		cout << (int*)copy.m_data << endl;
		cout << hello.getString() << endl;
	}	//copy 객체 소멸자 호출. (힙으로 생성된 메모리는 한 덩어리 뿐이고, copy의 인스턴스 소멸에 의해 hello 인스턴스까지 같이 삭제됨.)
	
	//강한 복사(Assignment operator overloading..)
	cout << hello.getString() << endl;
	//깊은 복사 :: 힙 메모리 또한 복사하는 것. (힙 덩어리 2개)
	//얕은 복사 :: 주소만 복사해서 가져온 것. (힙 덩어리 1개)
	return 0;
}