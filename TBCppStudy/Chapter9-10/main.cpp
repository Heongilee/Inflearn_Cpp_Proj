#include <iostream>
#include <cassert>

using namespace std;

class Fra {
private:
	int m_den;	//분모
	int m_num;	//분자

public:
	//delete키워드를 사용하면 char 타입의 인자로 생성자 호출이 안된다. :: 방어적 프로그래밍 사용.
	Fra(char) = delete;

	explicit Fra(const int &den = 0, const int &num = 1) : m_den(den), m_num(num) {
		assert(den != 0);
	}

	Fra(const Fra& src) : m_den(src.m_den), m_num(src.m_num) {}

	friend std::ostream& operator << (std::ostream& cout, const Fra & f) {
		cout << f.m_num << " / " << f.m_den << endl;

		return cout;
	}

};

void doSth(const Fra& f) {
	cout << f << endl;

	return;
}
int main() {
	Fra f(7);	// 1 / 7

	// 1 / 7
	//doSth(f);

	//Converting constructor -> 마치 doSth(Fra(7)); 처럼 읽어 들임. (explicit( : a. 명백한) 키워드를 사용한 생성자에는 안 먹힌다.)
	//doSth(7);		//-> explicit 키워드 비 사용.
	doSth(Fra(7));	//-> explicit 키워드 사용.

	//doSth(Fra('c'));	//-> delete 키워드 비 사용.
	

	return 0;
}