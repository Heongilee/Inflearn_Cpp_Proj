#include <iostream>

using namespace std;

struct Mystruct {
	int arr[5] = {9, 7, 5, 3, 1};
};

void printArr(int *arr)
//void printArr(int arr[])		//���� �Ȱ���
{
	//�迭 ������ ���
	cout << sizeof(arr) << endl;

	//�迭 ù��° ���� de-ref
	cout << *arr << endl;

	//���� 100
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
	//int *ptr = arr;		// *�� �ǹ� : int�ڷ��� �ּҸ� ���� �� �ִ� int �������� ����
	//cout << ptr << endl;
	//cout << *ptr << endl;	// *�� �ǹ� : de-referencing

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