#include <iostream>
#include <vector>	//std::vector 를 사용하기 위한 라이브러리.

using namespace std;

//동적 배열을 대체할 수 있는 std::vector
int main() {

	//std::vector<타입> 변수명 = 초기화;

	std::vector<int> v;

	vector<int> v2{ 1, 2, 3, 4, 5 };	//Uniform-Initialization의 특징 (등호 생략 가능)

	cout << v2.size() << endl;

	//사용.
		//Vector 뒤질 때 for-each문을 많이 씀
	for (auto &i : v2)
		cout << i << " ";

		//사이즈랑 인덱스 원소 출력.
	cout << "v2.size() : "<< v2.size() << endl;
	cout << "v2.at() : "<< v2.at(0) << endl;
	cout << "v2.front() : "<< v2.front() << endl;
	cout << "v2.back() : "<< v2.back() << endl;


		//Resizing
	v2.resize(10);
	for (auto &i : v2)
		cout << i << " ";
	cout << endl;
	cout << v2.at(9) << endl;


	//특징 1. Vector는 dealloc 할 필요 없이 알아서 메모리 해제 시켜준다. (Memory Leak이 없음.)
	/*
	int &*my_arr = new int[5];

	delete[] my_arr;
	*/

	
	return 0;
}