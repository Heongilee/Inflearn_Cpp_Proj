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

		//�ڱ����� �����ϴ� ������ ���� ����.
		if (this == &src) {
			return *this;
		}
		
		//���� �ִ� �� �����.
		delete[] m_data;

		//�ٽ� �Ҵ� �޾� ������.
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
	
	//Copy constructor�� ȣ���.
	Mystring str1 = "hello";

	//Assignment constructor�� ȣ�� ��.
	Mystring str2;
	str2 = hello;

	cout << (int*)hello.m_data << endl;
	cout << hello.getString() << endl;

	{
		Mystring copy = hello;	//�����Ϸ��� ������ �ִ� �⺻ ���� ������ ȣ��.(�ּ� ���簡 �Ͼ.)
		cout << (int*)copy.m_data << endl;
		cout << hello.getString() << endl;
	}	//copy ��ü �Ҹ��� ȣ��. (������ ������ �޸𸮴� �� ��� ���̰�, copy�� �ν��Ͻ� �Ҹ꿡 ���� hello �ν��Ͻ����� ���� ������.)
	
	//���� ����(Assignment operator overloading..)
	cout << hello.getString() << endl;
	//���� ���� :: �� �޸� ���� �����ϴ� ��. (�� ��� 2��)
	//���� ���� :: �ּҸ� �����ؼ� ������ ��. (�� ��� 1��)
	return 0;
}