#include <iostream>

using namespace std;

class B {
private:
	int b;

public:
	B(const int &b_in) : b(b_in) {
		this->print();
	}

	void print() {
		cout << "In class B ..." << endl;
		cout << b << endl;
	}
};
class Sth {
private:
	int i = 100;
	double d = 100.0;
	char c = 100;
	int arr[5] = { 100, 200, 300, 400, 500 };
	B b{ 1024 };	//������ �ʱ�ȭ�� �켱�� �Ǳ� ������ �ش� ��� ����ο��� �ʱ�ȭ �� �� ���� �ȴ�. // Priority : 3 rd

public:
	Sth() 
//		:i(1), d(3.14), c('a')	// Initializer List
//		:i{1}, d{3.14}, c{'a'}	// Initializer List (Uniform Initialize ��� :: �ڵ� ����ȯ�� �ȵȴٴ� ���� Ư¡.)
	:i{ 1 }, d{ 3.14 }, c{ 'a' }, arr{ 1, 2, 3, 4, 5 }, b(3)	// �迭�� �ʱ�ȭ ����. (C++ 11 ����...) // Priority : 2 nd
	{
		this->i *= 10;
		this->d = 10.0;
		this->c = 10;
		for (int i = 0; i < 5; i++) {
			this->arr[i] = (i + 1) * 10;
		}
		this->b = 10;								// Priority : 1 st (��, �� �κ��� ������� ��, Initializer List�� ���� �Ǵ� ���� �ƴϰ� 
													// ���� �������� ���̶�� ���� �ȴ�.
	}

	void print() {
		cout << this->i << " " << this->d << " " << this->c << endl;
		for (auto &e : this->arr) {
			cout << " " << e;
		}
		cout << endl;
	}
	
	B get_b() {
		return this->b;
	}
};

int main() 
{
	Sth s;

	s.print();

	return 0;
}