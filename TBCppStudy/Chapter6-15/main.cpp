#include <iostream>

using namespace std;

void doSth(const int& x)
//�� �Ķ���� Ÿ���� ���ڿ� ����� ������ ������ ���簡 �߻����� �ʱ� ������ �޸𸮰������� ȿ�����̴�.
{
	cout << x << endl;

	return;
}

int main() 
{
	int x = 5;
	const int &ref_x = 5;

	doSth(x);
	doSth(1);
	doSth(x + 3);
	doSth(3 * 4);


	return 0;
}