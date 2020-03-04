#include <iostream>

using namespace std;
//괄호 연산자() 를 오버로딩해서 함수 객체처럼 사용하는 방법..

class Accumulator{
private:
	int m_cnt = 0;

public:
	int operator() (const int &i) {
		return (m_cnt += i);
		//m_cnt의 i만큼 누적시키고 그 값을 리턴 시키는 동작을 함.
	}
};
int main() {
	Accumulator acc;

	//Functor
	cout << acc(10) << endl;
	cout << acc(20) << endl;	//Accumulation.

	return 0;
}