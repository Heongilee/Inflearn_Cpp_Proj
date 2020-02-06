#include <iostream>

using namespace std;

void doSth(int& n)
//void doSth(const int& n)		<-- doSth 내부에서 Parameter로 받아온 n의 값을 못 바꾸게 하고 싶은 경우
{
	n = 10;

	cout << "In doSth(int& n) : " << n << "\t and Address of variable : " << (uintptr_t)&n << endl;

	return;
}

struct Ch_8_9_Sth 
{
	int v1;
	float v2;
};

struct Sth_other 
{
	Ch_8_9_Sth st;
};

void printElements(const int (&arr)[5])
{
	for (int i = 0;i < 5;i++)
		cout << arr[i] << " ";

	cout << endl;

	return;
}

int main() 
{
	//					//Pra1.
	//int val = 5;

	//int *ptr = nullptr;
	//ptr = &val;

	//					//Pra2.
	//int val = 5;
	//int &ref = val;	
	//				// ref가 마치 val과 같은 메모리를 공유하는것 처럼 쓰인다.
	//				// val이라는 변수의 이름이 가지는 ref라는 별명이 있다는 뉘앙스로 이해하자
	//				// 특징 1. val == ref
	//				// 특징 2. &val == &ref
	//				// 특징 3. 참조변수는 컴파일타임에 초기화 되어야 한다. (int &ref; <-- 불가능)
					// 특징 4. Literal Initialization 불가능하다. (int &ref = 10;	<- 불가능)


	//ref = 10;

	//cout << "val : " << val << "\tref : " << ref << endl;

	//					//Pra3.
	//int *ptr = nullptr;
	//int val = 10;
	//int &ref = val;

	//ptr = &val;

	//cout << "Address of val is\t" << (uintptr_t)&val << endl;
	//cout << "Address of ref is\t" << (uintptr_t)&ref << endl;
	//cout << "Address of ref is\t" << (uintptr_t)ptr << endl;
	//cout << "Address of ref is\t" << (uintptr_t)&ptr << endl;

	//					//Pra4.
	//int x = 5;
	//int &ref = x;

	//const int y = 8;
	////int &ref = y;		// ref에서 y의 값을 마음대로 바꾸어 버릴 여지가 있기 때문에 ERROR를 띄운다.
	//const int &ref = y;	// 해결방법.

	//					//Pra5.
	//int val1 = 5; int val2 = 10;
	//int &ref1 = val1;

	//cout << ref1 << endl;

	//ref1 = val2;

	//cout << ref1 << endl;

	//						//Pra6.
	//int n = 5;
	//int *ptr = &n;

	//cout << "[1] : " << n <<"\t and Address of variable : "<< (uintptr_t)&n<< endl;

	//doSth(n);

	//cout << "[2] : " << n << "\t and Address of variable : " << (uintptr_t)&n << endl;

	//doSth(*ptr);

	//cout << "[3] : " << n << "\t and Address of variable : " << (uintptr_t)&n << endl;

	//cout << (uintptr_t)ptr << " " << *ptr << " "<< n <<endl;

	//						//Pra7.
	//const int length = 5;
	//int arr[length] = { 1,2,3,4,5 };

	//printElements(arr);

	//						//Pra8.
	//Sth_other ot;

	//ot.st.v1 = 1.0;	//번거롭다.

	//int &v1 = ot.st.v1;
	//v1 = 1;

							//Pra9.
	int val = 5;
	int *const ptr = &val;	//val의 주소를 int형 ptr 포인터 상수에 초기화 시켰다.
	int &ref = val;
	//'int *const ptr = &val' 와 'int &ref = val'는 기능상 같다고 봐도 된다.

	*ptr = 10;
	ref = 10;

	return 0;
}