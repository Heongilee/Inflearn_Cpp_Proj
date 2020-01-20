#include <iostream>
#include <string>

using namespace std;

//	�� Warning	:	declaration�� definition�� �и� ��ų ��� �� �������� Default Parameter�� �������� �ϸ�,
//					�� �׷��� ���� �޽���(redefiniton of default argument)�� ����.
//	�� Tip		:	���� declaration�� Default Argument�� ����Ѵ�.
void print_2(double x = 1.1, double y = 2.2, double z = 3.3);

void print_1(int x = 3) {	// Default Parameter = Optional Parameter = Default Argument ��� �Ѵ�.
	cout << x << endl;

	return;
}
void print_2(double x, double y, double z) {
	cout << x << " " << y << " " << z << endl;

	return;
}
void print_3(string str){}
void print_3(char ch = ' ') {}
//Default Parameter�� �ʱ�ȭ �� �Ÿ� �ݵ�� ���� �����ʿ� �ִ� �Ķ���� ������ �ʱ�ȭ ������� �Ѵ�.
//void print(int x, int y = 10, int z) {}

int main() {

			// (1) - �Ű����� �⺻�� ���.
	print_1(int());	//void ������ ��� �⺻ �Ķ���� ���� ����Ѵ�.
	print_1(10);	//���ڸ� ������ ���ڸ� Default Parameter���� �켱���� �����Ѵ�.

			// (2) - �Ϲ� ������� «�� ����.
	print_2(11.1);
	print_2(11.1, 22.2);
	print_2(11.1, 22.2, 33.3);
	
			// (3) - String�� ����� ���ô�!
	print_3();

	return 0;
}