#include <iostream>

using namespace std;

void printArr(int* arr)
{
	for (int i = 0;;i++)
	{
		//if (arr[i]== 0) break;
		
		cout << arr[i] << endl;
	}

	return;
}

int main() 
{
	//					//Pra1.
	//int length;		cin >> length;			//length를 프로그래머로부터 입력받음

	//int *arr = new int[length] {11, 22, 33, 44, 55, 66, };		//Uniform Initialization을 이용한 동적 할당한 배열 초기화
	//															//Uniform Init 특성에 의해 arr[6]부터 0으로 초기화 된다.

	//for (int i = 0;i < length;i++)
	//	cout << "val is " << arr[i] << "\tand address is " << &arr[i] << endl;

	//delete [] arr;				//동적 할당 받은 배열을 OS에서 메모리 해제 시킨다.

						//Pra2.
	int fixedArr[] = {1, 2, 3, 4, 5};		//일반 배열의 경우 compile time에 초기화된 형태에 따라 크기를 결정하지만
	int *arr = new int[4] {1, 2, 3, 0};	//동적할당 배열의 경우 그렇지 못하기 때문에 크기를 항상 compile time에 지정해 줘야 함

	//resizing
	/* A. 우회적인 방법 */
	//1. 더 큰 메모리를 받아온 뒤에
	int *newArr = new int[6]{0};	//기본 배열 크기 5 + break걸기 위해 추가 공간 1byte
	//2. 기존에 있던것들을 복사하고
	arr = newArr;

	//3. 추가로 덧 붙일 것들을 넣어준다.
	newArr[3] = 4; newArr[4] = 5;	//newArr[5] = 0;

	printArr(arr);

	delete[] newArr;

	return 0;
}