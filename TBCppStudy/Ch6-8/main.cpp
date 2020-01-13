#include <iostream>

using namespace std;

struct Mystruct {
	int arr[5] = {9, 7, 5, 3, 1};
};

void printArr(int *arr)
//void printArr(int arr[])		//둘이 똑같다
{
	//배열 사이즈 출력
	cout << sizeof(arr) << endl;

	//배열 첫번째 원소 de-ref
	cout << *arr << endl;

	//대입 100
	*arr = 100;
}

void printArr(Mystruct *ms)
{
	cout << sizeof((*ms).arr) << endl;
}

int main() 
{
	int arr[5] = {9, 7, 5, 3, 1};

	//				//Pra1.
	//cout << arr[0] << " " << arr[1] << endl;
	//cout << arr << endl;
	//cout << &(arr[0]) << endl;

	//				//Pra2.
	//char name[] = "Jack jack";
	//cout << *name << endl;

	//				//Pra3.
	//int *ptr = arr;		// *의 의미 : int자료형 주소를 담을 수 있는 int 포인터형 변수
	//cout << ptr << endl;
	//cout << *ptr << endl;	// *의 의미 : de-referencing

	//				//Pra4.
	//int *ptr = arr;
	//printArr(arr);
	//cout << arr[0] << " " << *arr << endl;

	Mystruct ms;

	cout << ms.arr[0] << endl; 

	cout << "[1] : "<< sizeof(ms.arr) << endl;

	cout << "[2] : ";
	printArr(&ms);

	
	return 0;
}