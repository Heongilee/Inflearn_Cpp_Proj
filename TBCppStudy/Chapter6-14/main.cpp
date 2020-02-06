#include <iostream>

using namespace std;

void doSth(int& n)
//void doSth(const int& n)		<-- doSth ���ο��� Parameter�� �޾ƿ� n�� ���� �� �ٲٰ� �ϰ� ���� ���
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
	//				// ref�� ��ġ val�� ���� �޸𸮸� �����ϴ°� ó�� ���δ�.
	//				// val�̶�� ������ �̸��� ������ ref��� ������ �ִٴ� ���ӽ��� ��������
	//				// Ư¡ 1. val == ref
	//				// Ư¡ 2. &val == &ref
	//				// Ư¡ 3. ���������� ������Ÿ�ӿ� �ʱ�ȭ �Ǿ�� �Ѵ�. (int &ref; <-- �Ұ���)
					// Ư¡ 4. Literal Initialization �Ұ����ϴ�. (int &ref = 10;	<- �Ұ���)


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
	////int &ref = y;		// ref���� y�� ���� ������� �ٲپ� ���� ������ �ֱ� ������ ERROR�� ����.
	//const int &ref = y;	// �ذ���.

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

	//ot.st.v1 = 1.0;	//���ŷӴ�.

	//int &v1 = ot.st.v1;
	//v1 = 1;

							//Pra9.
	int val = 5;
	int *const ptr = &val;	//val�� �ּҸ� int�� ptr ������ ����� �ʱ�ȭ ���״�.
	int &ref = val;
	//'int *const ptr = &val' �� 'int &ref = val'�� ��ɻ� ���ٰ� ���� �ȴ�.

	*ptr = 10;
	ref = 10;

	return 0;
}