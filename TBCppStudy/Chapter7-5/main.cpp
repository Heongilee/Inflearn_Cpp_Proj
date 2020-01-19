#include <iostream>
#include <array>

using namespace std;

int* getValue(int x) {
	int value = x * 2;

	return &value;
}
int& getValue2(int x) {
	int value = x * 2;

	return value;
}
int* memalloc(int size) {
	return new int[size];
}
int& get(array<int, 100>& my_arr, int ix) {
	return my_arr[ix];	//�迭 ���� ������ ��ȯ���� ��ġ �� ����ó�� ����� �� �ֵ��� ���� ���� �ִ�.
}
std::tuple<int, double> getTuple() {
	int v = 5;
	double rad = 3.14;

	return std::make_tuple(v, rad);
}
int main() {
	//			// (1) - �ּ� ��ȯ�� ������ ��� 2����
	//int value1 = *getValue(3);	//de-referencing�� ����� ��ȯ(unsafe, �Լ��� ��� ���� ����� ���� de-ref �ϱ� ����.)
	//							//Output> warning C4172: ���� ���� �Ǵ� �ӽ�: value�� �ּҸ� ��ȯ�ϰ� �ֽ��ϴ�.

	//int* value2 = getValue(3);	//�� ������. 
	//							//Output> warning C4172: ���� ���� �Ǵ� �ӽ�: value�� �ּҸ� ��ȯ�ϰ� �ֽ��ϴ�.

	//cout << *value2 << " " << value2 << " " << &value2 << endl;

	//			// (2) - factory pattern ����(?) (Return By Address)
	//int *arr = memalloc(1024);

	//delete[] arr;

	//		// (3) - Return By Reference
	//int &value = getValue2(5);	//�Լ��� ��ȯ�� reference��, �޾��ִ� ������ reference�̱� ������ unsafe

	//cout << value << endl;		//ù�� ° ��¿����� �� ��µ� �� ����
	//cout << value << endl;		//�ι� ° ��¿����� �޸𸮰� ���� ���̱� ������ ���� ��ȯ�� �ȵȴ�.

	//		// (4) - Return By Reference�� ���ϰ� ����ϴ� ��� �Ұ�
	//array<int, 100> my_arr;

	//my_arr[30] = 10;
	//get(my_arr, 30) = 1024;		//�� ������ ���� ����� �Ѵ�.


			// (5) - ���� ���� �� �����ϴ� ���.
	// ���� ��� (����ü ���) -> �Լ� �ϳ��� ������ �� ���� ����ü �ϳ��� ������ �ϱ� ������ ���� �����ε尡 ũ�ٴ� ������ �ִ�.
	// C style �ڵ�

	//// ���ο� ���1, C++ style �ڵ� (Ʃ��(std::tuple<type1, type2, ..., typeN>)�� �̿�)
	//std::tuple<int, double> my_tp = getTuple();
	//
	//cout << "Tuple get(0) : " << std::get<0>(my_tp) << endl;	//v
	//cout << "Tuple get(1) : " << std::get<1>(my_tp) << endl;	//rad

	// ���ο� ���2, (C++ 17 �̻�:: project\properties\C/C++\Languages\C++ Language Standard ���� ����)
	// �ؼ� : a�� d ���� ����(int &)�� �����ϸ鼭 �Լ� ���� ���� ��ȯ���ְ� �ִ�.
	auto[a, d] = getTuple();
	cout << a << endl;
	cout << d << endl;

	
	return 0;
}