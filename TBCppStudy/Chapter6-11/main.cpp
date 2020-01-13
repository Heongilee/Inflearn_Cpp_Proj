#include <iostream>

using namespace std;

int main() 
{
	//				//Pra1. 정적 메모리 할당
	//int arr[1000000];	//Static Memory Allocation -> 스택에 들어감 -> 용량이 부족

	//				//Pra2. 동적 메모리 할당 기초
	//int var;
	//var = 7;						// [1]

	////int *ptr = new int { 7 };		// [2] 
	//int *ptr = new (std::nothrow) int{7};
	////new가 실패할 경우(?) nothrow 예외처리를 작동시켜 ptr에 nullptr을 대입시킨다.
	////*ptr = 7;
	//								//※ [1] 번과 [2] 번 은 같은 기능을 한다.

	//cout << ptr << endl << *ptr << endl;

	//delete ptr;	//메모리 해제
	//ptr = nullptr;	//메모리 해제 후 NULL포인터로 변경

	//cout << "After delete" << endl;
	//if (ptr)
	//	cout << ptr << endl << *ptr << endl;
	//else
	//	cout << "Couldn't alloc mem" << endl;

	//				//Pra3. 흔히 범하는 실수.
	//int *ptr = new (std::nothrow) int{ 7 };
	//int *ptr2 = ptr;

	//delete ptr;
	//ptr = nullptr;
	//// 이 줄 이하에서
	//// *ptr2 (ptr2를 de-referencing을 하면 ERROR가 뜬다.)
	
	//				//Pra4. memory leak : 메모리 누수
	//while (1)
	//{
	//	double *ptr = new double;
	//	cout << ptr << endl;
	//}	//프로그램에서 메모리를 계속 받아오는데 어디다 받아 뒀는지 프로그램조차도 잊어버리는 현상.

		//Pra4-a. 메모리 누수 해결방법
	while (1)
	{
		double *ptr = new double;
		cout << ptr << endl;

		delete ptr;
	}	//프로그램에서 메모리를 계속 받아오는데 어디다 받아 뒀는지 프로그램조차도 잊어버리는 현상.


	return 0;
}