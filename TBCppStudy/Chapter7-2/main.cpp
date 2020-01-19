#include <iostream>
#include <cmath> // sin(), cos() 라이브러리...
#include <vector>	// std::vector를 사용하기 위한 라이브러리...
using namespace std;
constexpr auto PI = 3.141592;	// static을 사용함으로서 해당 함수 안에서 매번 호출시마다 값을 초기화 시키지 않음.;
typedef const int* C_INT_P;		// foo2()의 이해를 돕기 위해 다음과 같이 씀. const int* 와 C_INT_P는 같다.

void doSth(int y) {
	cout << "In doSth() : " << y << " " << &y << endl;
	return;
}
void addOne(int& y) {
	y += 1;
	cout << "In addOne() : " << y << " " << &y << endl;

	return;
}

//C++에서 많이 쓰이는 메소드 형태. (const 타입)이면 입력이구나, (타입& )레퍼런스 기호 면은 출력이구나.
void getSinCos(const double degree, double& sinOut, double& cosOut){
	static const double pi = 3.141592 / 180.0;	// static을 사용함으로서 해당 함수 안에서 매번 호출시마다 값을 초기화 시키지 않음.
	const double rad = degree * pi;	// degree(각도)를 라디안으로 바꾸는 공식.

	//두 개의 Parameter로 명시한 래퍼런스 변수에 결과 값을 대입해 값 두개를 반환하는 것 처럼 작동함.
	sinOut = std::sin(rad);
	cosOut = std::cos(rad);

	return;
}

void foo(const int& x) {
	cout << x << endl;

	return;
}
void foo2(C_INT_P &p) {
	cout << p << " " << &p << endl;

	return;
}
void printElement(int (&arr)[5]) {
	return;
}
void printElement2(vector<int>& arr) {
	return;
}
int main() {
	//////////////////////////////////////////////////////////////////////////////
	// 7 - 2
	//////////////////////////////////////////////////////////////////////////////

	int x = 6;

	cout << "In main() : " << x << " " << &x << endl;

	doSth(5);
	doSth(x);
	doSth(x + 1);

	//////////////////////////////////////////////////////////////////////////////
	// 7 - 3
	//////////////////////////////////////////////////////////////////////////////

	addOne(x);

	double sin(0.0);	//cmath 라이브러리에서 가져온 sin이란 객체를 인스턴스화 한다.
	double cos(0.0);

	getSinCos(30.0, sin, cos);

	cout << sin << " " << cos << endl;

	foo(6);	//받는쪽에서 레퍼런스를 받아야하는데 리터럴(상수 값)이라 주소가 없어서 에러 발생...
	// const 타입 레퍼런스 파라미터로 받으면 해결.
	

					// 포인터를 레퍼런스로 전달하는 방법...
	C_INT_P p = &x;

	cout << p << " " << &p << endl;
	foo2(p);

					//array를 파라미터로 전달하는 방법...
	int arr[]{ 1, 2, 3, 4, 5 };
	vector<int> arr2{ 6, 7, 8, 9, 10 };

	printElement(arr);

	printElement2(arr2);

	return 0;
}