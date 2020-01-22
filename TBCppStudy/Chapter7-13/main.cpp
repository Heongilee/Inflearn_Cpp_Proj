#include <iostream>
#include <string>

using namespace std;

int main() {
	//////////////////////////////////////////////////////////////////////////////////
	//						 ※	방어적 프로그래밍	※
	//////////////////////////////////////////////////////////////////////////////////
	//syntax error(문법 오류)

	//semantic error(구문 오류 / 의미 오류) -> 디버거 사용 등.
	int x;
	cin >> x;
	if (x >= 5)	// '=' 하나 때문에 에러가 뜨는 것. (5일 경우 의미가 맞지 않음.)
		cout << "x is greater than 5" << endl;
	
	// violated assumption(가정 위반 : 사용자가 내가 작성한 것과 전혀 다른 방식으로 프로그램을 사용한다.)
	std::string hello{ "Hello, My name is Heongi" };

	int ix;
	cin >> ix;

	cout << hello.at(ix) << endl;

	return 0;
}