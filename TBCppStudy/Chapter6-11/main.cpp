#include <iostream>

using namespace std;

int main() 
{
	//				//Pra1. ���� �޸� �Ҵ�
	//int arr[1000000];	//Static Memory Allocation -> ���ÿ� �� -> �뷮�� ����

	//				//Pra2. ���� �޸� �Ҵ� ����
	//int var;
	//var = 7;						// [1]

	////int *ptr = new int { 7 };		// [2] 
	//int *ptr = new (std::nothrow) int{7};
	////new�� ������ ���(?) nothrow ����ó���� �۵����� ptr�� nullptr�� ���Խ�Ų��.
	////*ptr = 7;
	//								//�� [1] ���� [2] �� �� ���� ����� �Ѵ�.

	//cout << ptr << endl << *ptr << endl;

	//delete ptr;	//�޸� ����
	//ptr = nullptr;	//�޸� ���� �� NULL�����ͷ� ����

	//cout << "After delete" << endl;
	//if (ptr)
	//	cout << ptr << endl << *ptr << endl;
	//else
	//	cout << "Couldn't alloc mem" << endl;

	//				//Pra3. ���� ���ϴ� �Ǽ�.
	//int *ptr = new (std::nothrow) int{ 7 };
	//int *ptr2 = ptr;

	//delete ptr;
	//ptr = nullptr;
	//// �� �� ���Ͽ���
	//// *ptr2 (ptr2�� de-referencing�� �ϸ� ERROR�� ���.)
	
	//				//Pra4. memory leak : �޸� ����
	//while (1)
	//{
	//	double *ptr = new double;
	//	cout << ptr << endl;
	//}	//���α׷����� �޸𸮸� ��� �޾ƿ��µ� ���� �޾� �״��� ���α׷������� �ؾ������ ����.

		//Pra4-a. �޸� ���� �ذ���
	while (1)
	{
		double *ptr = new double;
		cout << ptr << endl;

		delete ptr;
	}	//���α׷����� �޸𸮸� ��� �޾ƿ��µ� ���� �޾� �״��� ���α׷������� �ؾ������ ����.


	return 0;
}