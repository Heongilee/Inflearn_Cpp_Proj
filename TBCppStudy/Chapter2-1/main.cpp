#include <iostream>

int main() {
	using namespace std;

	//auto �ڷ��� �ʱ�ȭ
	auto aVal1 = 3.141592f;
	auto aVal2 = 3.141592;

	//�� ���
	cout << "aVal1 (float) is" << aVal1 << endl;
	cout << "aVal2 (double) is" << aVal2 << endl;


	//������
	cout << "aVal1 (float) size is" << sizeof(aVal1) << endl;
	cout << "aVal2 (double) size is" << sizeof(aVal2) << endl;
}