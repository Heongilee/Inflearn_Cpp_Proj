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
	B b{ 1024 };	//생성자 초기화가 우선이 되기 때문에 해당 멤버 선언부에서 초기화 한 건 무시 된다. // Priority : 3 rd

public:
	Sth() 
//		:i(1), d(3.14), c('a')	// Initializer List
//		:i{1}, d{3.14}, c{'a'}	// Initializer List (Uniform Initialize 사용 :: 자동 형변환이 안된다는 것이 특징.)
	:i{ 1 }, d{ 3.14 }, c{ 'a' }, arr{ 1, 2, 3, 4, 5 }, b(3)	// 배열도 초기화 가능. (C++ 11 부터...) // Priority : 2 nd
	{
		this->i *= 10;
		this->d = 10.0;
		this->c = 10;
		for (int i = 0; i < 5; i++) {
			this->arr[i] = (i + 1) * 10;
		}
		this->b = 10;								// Priority : 1 st (단, 이 부분을 명시했을 때, Initializer List가 무시 되는 것이 아니고 
													// 덮어 씌워지는 것이라고 보면 된다.
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