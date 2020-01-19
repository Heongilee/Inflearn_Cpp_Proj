#include <iostream>
#include <array>		//std::array를 사용하기위한 라이브러리.
#include <algorithm>	//std::sort를 사용하기 위한 라이브러리.
using namespace std;

void printLeng(const array<int, 5> my_arr) { //값 복사도 똑같이 일어남.
	cout << "[In Function] : ";
	cout << my_arr.size() << endl;

	return;
}
void print_Elem(const array<int, 5> my_arr) {
	//레퍼런스 기호(Ampersand)를 붙이면 값 복사가 생략되기 때문에 속도가 빨라진다.
	for (auto &elem : my_arr) {	
		cout << elem << " ";
	}
	cout << endl;
	return;
}
void sorting(array<int, 5> *my_arr){
	sort((*my_arr).begin(), (*my_arr).end());

	return;
}
void rsorting(array<int, 5> *my_arr){
	sort((*my_arr).rbegin(), (*my_arr).rend());

	return;
}

int main() {
	//int arr[5] = { 1, 2, 3, 4, 5 };

	// 1. array<타입, 크기> 변수명 = 값 초기화;
	array<int, 5> my_arr = { 1, 2, 3, 4, 5 };

	//my_arr = { 0, 1, 2, 3, 4, 5};	//갯수가 많을 때는 안 된다.

	//my_arr = { 0, 1, 2 }; //갯수가 적을때는 가능하다.

	//두 명령은 같은 기능을 한다.
	cout << my_arr[0] << endl;	//std::array의 크기 값에 초과되는지 아닌지 확인하지 않고 바로 Access 해본다. (퍼포먼스가 빠름)
	//cout << my_arr.at(10) << endl;	//std::array의 크기값에 따라 적절한 Access인지 확인 후 접근. 예외처리를 띄우는 특징을 가짐.

	//크기 값을 알아 봄.
	cout << my_arr.size() << endl;

	printLeng(my_arr);
	
	my_arr = { 1, 21, 3, 40, 5 };

	print_Elem(my_arr);	//정순 출력

	sorting(&my_arr);

	print_Elem(my_arr);	//오름차순 출력

	rsorting(&my_arr);

	print_Elem(my_arr);	//내림차순 출력

	return 0;
}