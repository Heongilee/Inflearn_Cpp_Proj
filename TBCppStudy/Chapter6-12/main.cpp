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
	//int length;		cin >> length;			//length�� ���α׷��ӷκ��� �Է¹���

	//int *arr = new int[length] {11, 22, 33, 44, 55, 66, };		//Uniform Initialization�� �̿��� ���� �Ҵ��� �迭 �ʱ�ȭ
	//															//Uniform Init Ư���� ���� arr[6]���� 0���� �ʱ�ȭ �ȴ�.

	//for (int i = 0;i < length;i++)
	//	cout << "val is " << arr[i] << "\tand address is " << &arr[i] << endl;

	//delete [] arr;				//���� �Ҵ� ���� �迭�� OS���� �޸� ���� ��Ų��.

						//Pra2.
	int fixedArr[] = {1, 2, 3, 4, 5};		//�Ϲ� �迭�� ��� compile time�� �ʱ�ȭ�� ���¿� ���� ũ�⸦ ����������
	int *arr = new int[4] {1, 2, 3, 0};	//�����Ҵ� �迭�� ��� �׷��� ���ϱ� ������ ũ�⸦ �׻� compile time�� ������ ��� ��

	//resizing
	/* A. ��ȸ���� ��� */
	//1. �� ū �޸𸮸� �޾ƿ� �ڿ�
	int *newArr = new int[6]{0};	//�⺻ �迭 ũ�� 5 + break�ɱ� ���� �߰� ���� 1byte
	//2. ������ �ִ��͵��� �����ϰ�
	arr = newArr;

	//3. �߰��� �� ���� �͵��� �־��ش�.
	newArr[3] = 4; newArr[4] = 5;	//newArr[5] = 0;

	printArr(arr);

	delete[] newArr;

	return 0;
}