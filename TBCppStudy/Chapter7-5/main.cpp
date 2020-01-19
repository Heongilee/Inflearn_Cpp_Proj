#include <iostream>
#include <array>

using namespace std;

int* getValue(int x) {
	int value = x * 2;

	return &value;
}
int& getValue2(int x) {
	int value = x * 2;

	return value;
}
int* memalloc(int size) {
	return new int[size];
}
int& get(array<int, 100>& my_arr, int ix) {
	return my_arr[ix];	//배열 참조 형식을 반환시켜 마치 저 형태처럼 사용할 수 있도록 해줄 수도 있다.
}
std::tuple<int, double> getTuple() {
	int v = 5;
	double rad = 3.14;

	return std::make_tuple(v, rad);
}
int main() {
	//			// (1) - 주소 반환의 위험한 사례 2가지
	//int value1 = *getValue(3);	//de-referencing한 결과를 반환(unsafe, 함수를 벗어난 순간 사라질 값을 de-ref 하기 때문.)
	//							//Output> warning C4172: 지역 변수 또는 임시: value의 주소를 반환하고 있습니다.

	//int* value2 = getValue(3);	//더 위험함. 
	//							//Output> warning C4172: 지역 변수 또는 임시: value의 주소를 반환하고 있습니다.

	//cout << *value2 << " " << value2 << " " << &value2 << endl;

	//			// (2) - factory pattern 연상(?) (Return By Address)
	//int *arr = memalloc(1024);

	//delete[] arr;

	//		// (3) - Return By Reference
	//int &value = getValue2(5);	//함수의 반환이 reference고, 받아주는 변수도 reference이기 때문에 unsafe

	//cout << value << endl;		//첫번 째 출력에서는 잘 출력될 지 몰라도
	//cout << value << endl;		//두번 째 출력에서는 메모리가 죽은 후이기 때문에 값이 반환이 안된다.

	//		// (4) - Return By Reference를 편하게 사용하는 사례 소개
	//array<int, 100> my_arr;

	//my_arr[30] = 10;
	//get(my_arr, 30) = 1024;		//두 문장이 같은 기능을 한다.


			// (5) - 값을 여러 개 리턴하는 방법.
	// 기존 방법 (구조체 사용) -> 함수 하나를 리턴할 때 마다 구조체 하나를 만들어야 하기 때문에 구현 오버로드가 크다는 단점이 있다.
	// C style 코딩

	//// 새로운 방법1, C++ style 코딩 (튜플(std::tuple<type1, type2, ..., typeN>)을 이용)
	//std::tuple<int, double> my_tp = getTuple();
	//
	//cout << "Tuple get(0) : " << std::get<0>(my_tp) << endl;	//v
	//cout << "Tuple get(1) : " << std::get<1>(my_tp) << endl;	//rad

	// 새로운 방법2, (C++ 17 이상:: project\properties\C/C++\Languages\C++ Language Standard 에서 변경)
	// 해석 : a와 d 각각 변수(int &)를 선언하면서 함수 리턴 값을 반환해주고 있다.
	auto[a, d] = getTuple();
	cout << a << endl;
	cout << d << endl;

	
	return 0;
}