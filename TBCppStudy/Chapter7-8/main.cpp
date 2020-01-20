#include <iostream>
#include <string>

using namespace std;

//	※ Warning	:	declaration과 definition을 분리 시킬 경우 한 곳에서만 Default Parameter를 명시해줘야 하며,
//					안 그러면 에러 메시지(redefiniton of default argument)를 띄운다.
//	※ Tip		:	보통 declaration에 Default Argument를 명시한다.
void print_2(double x = 1.1, double y = 2.2, double z = 3.3);

void print_1(int x = 3) {	// Default Parameter = Optional Parameter = Default Argument 라고 한다.
	cout << x << endl;

	return;
}
void print_2(double x, double y, double z) {
	cout << x << " " << y << " " << z << endl;

	return;
}
void print_3(string str){}
void print_3(char ch = ' ') {}
//Default Parameter를 초기화 할 거면 반드시 가장 오른쪽에 있는 파라미터 변수도 초기화 시켜줘야 한다.
//void print(int x, int y = 10, int z) {}

int main() {

			// (1) - 매개변수 기본값 사용.
	print_1(int());	//void 인자의 경우 기본 파라미터 값을 사용한다.
	print_1(10);	//인자를 넣으면 인자를 Default Parameter보다 우선으로 간주한다.

			// (2) - 일반 사용방법과 짬뽕 가능.
	print_2(11.1);
	print_2(11.1, 22.2);
	print_2(11.1, 22.2, 33.3);
	
			// (3) - String을 사용해 봅시다!
	print_3();

	return 0;
}