#pragma once	//헤더가드가 중복 include 되는것을 방지해 준다. (C언어에서 ifndef~endif 사용하는 것과 비슷)

#include <iostream>

//Warning: 헤더파일 안에서 using namespace를 사용하면 이 안에서 include 하는 것들이 전부 영향을 받아 예상치 못한 결과를 가져옴.
//using namespace std;
class Calc {
private:
	int val;
public:
	//함수 정의 전체를 블록 지정한 뒤, Ctrl+. -> Move to definition location을 하면 별도의 cpp파일을 만들어 정의를 저장함.

	// 템플릿 사용이나 연구용 코드의 경우 헤더에 바디를 그냥 남겨놓는 경우도 많다. (때에 따라 적절히 사용)
	Calc(const int &val);
	Calc& add(const int &val);
	Calc& sub(const int &val);
	Calc& mult(const int &val);
	Calc& div(const int &val);
	Calc& mod(const int &val);
	void print();
};
