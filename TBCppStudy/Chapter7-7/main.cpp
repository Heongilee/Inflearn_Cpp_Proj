#include <iostream>

using namespace std;
typedef int my_int;

int add(const int &a, const int &b) {
	return a + b;
}
double add(const double &a, const double &b) {
	return a + b;
}

int getRand(int x) {
	return x % 2 + 1;
}
double getRand(double x) {
	return x + 5;
}

int typedef_func(int x) {
	return x;
}
int typedef_func(my_int x) {
	return x + 1;
}

void print_4(int a) {}
void print_4(char* a) {}
void print_4(const char* a) {}

void print_5(unsigned int a){}
void print_5(float a){}
// if) 같은 기능을 하되, 때에 따라 리턴타입을 다르게 하고 싶을 때...
/*
int getRandomValue() {}
double getRandomValue() {}

sol 1) 오버로드 회피
int getRandomInt() {}
double getRnadomDouble() {}

sol 2) 오버로딩을 위해 억지로 파라미터를 사용.
int getRandomValue(int x) {}
double getRnadomValue(double x) {}

main()
	getRandomValue(int());	//일종의 트릭...
*/
int main(){
	/////////////////////////////////////////////////////////////////////////////////////
	//					※	Function Overload	※
	// 오버로딩된 함수들 중 컴파일러가 들어가 있는 인자를 분석해
	// 그 중에 제일 매개변수 타입이 잘 맞는 함수를 알아서 찾아
	// 그 함수를 실행시킨다.
	// 
	// 오해 1) 리턴타입만 다르다고해서 함수 오버로딩이 아니다. (인자 갯수나 타입이 달라야 함.)
	/////////////////////////////////////////////////////////////////////////////////////

	//			// (1) - 함수 오버로딩 기본
	//cout << add(1, 2) << endl;	//이 단에서 오버로딩을 구현한 두 함수중 어느 함수를 선택할지는 compile time에 결정되어야 한다.
	//cout << add(3.1, 4.2) << endl;

	//			// (2) - 리턴 타입만 다르게 하고 싶을 때... (해결방법)
	//cout << getRand(int()) << endl;	//인자로는 0값이 들어간다.
	//cout << getRand(double()) << endl;	//인자로는 0.0값이 들어간다.

	//			// (3) - typedef로 한번 포장한 것을 가지고 오버로딩을 시도하면...?
	//typedef_func(int());
	//typedef_func(my_int());		// 컴파일 타임에서 두 타입은 같은 것으로 판정하여 오버로딩 실패...

				// (4) - 좀 더 현실적인 문제(1) - 잘 맞는게 없어서 억지로 있는 것들 중에서 찾는데 잘 안 맞았던 경우
	print_4(0);
	print_4('a');	//의도와는 다르게 int 파라미터를 가지는 함수를 오버로드 한다.
	print_4("a");	//오버로드할 함수가 없기 때문에 에러메시지를 띄운다. (3번째 오버로드한 함수를 호출해야함.)

				// (5) - 좀 더 현실적인 문제(2) - 오버로드 된 함수들의 파라미터에 다들 너무 잘 맞아 모호한 경우(ambiguous...)
	/*print_5('a');
	print_5(0);
	print_5(3.141592);*/

	//해결방법
	print_5((unsigned int)'a');	//type casting
	print_5(0u);				//u 키워드 (unsigned)
	print_5(3.141592f);			//f 키워드 double -> (float)
	
	return 0;
}