#include <iostream>
#include <vector>

using namespace std;

void print_Stack(const vector<int> &stack) {
	for (auto & e : stack) {
		cout << e << " ";
	}
	cout << endl;

	return;
}

int main() {
	//			// (1) - vector의 기본 사용방법.
	///*
	//※ new와 delete의 단점.
	//힙 메모리에 sizeof(int) * 3 공간을 
	//임의의 빈 공간을 탐색해 할당해야하기 때문에 많이 느리다.
	//*/
	//int* arr = new int[3]{ 1, 2, 3 };

	////std::vector를 잘 사용하는 방법? -> 내부에서 수행되는 new와 delete이 어떻게 하면 적게 사용 될 지 생각하며 써야 한다.
	//vector<int> v = { 1, 2, 3 };

	//for (auto &elem : v)
	//	cout << elem << " ";
	//cout << endl;

	//			// (2) - resize(), capacity(), reserve()
	///*
	//size : 잡혀 있는 capacity중에서 몇개 만 사용한다는 뉘앙스,

	//capacity(케파시티) : capacity수 만큼 메모리를 잡고 있음,

	//reserve : 메모리의 용량을 미리 확보해 놓겠다는 의미.
	//*/
	//v.resize(2);		// std::vector의 기본 size보다 더 작은 사이즈로 resizing은 메모리 반납&재 할당이 아닌,
	//					// 사이즈가 2만 사용한다고 속이는 뉘앙스로 이해하자.

	//cout << "[1] : "<< v.size() << " " << v.capacity() << endl;

	//v.reserve(1024);	//앞으로 resizing하여 키울 공간을 미리 reserve 명령어로 공간을 잡아두면 속도가 훨씬 빠르다.
	//cout << "[2] : " << v.size() << " " << v.capacity() << endl;

	////cout << v.at(2) << endl;

	//// ※	다음과 같이 사이즈 2로 리사이징한 상태에서 억지로 해당 인덱스 값을 찍어보면 
	////		값이 아직 존재한다는 것을 알 수 있다.
	//int* ptr = v.data();
	//cout << ptr[2] << endl;


				// (3) - 스택으로 사용하는 방법

	vector<int> stack;

	//push
	stack.push_back(3);
	print_Stack(stack);
	stack.push_back(7);
	print_Stack(stack);
	stack.push_back(5);
	print_Stack(stack);

	//pop
	stack.pop_back();
	print_Stack(stack);
	stack.pop_back();
	print_Stack(stack);
	stack.pop_back();
	print_Stack(stack);

	return 0;
}