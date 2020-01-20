#include <iostream>

using namespace std;
typedef int my_int;

int add(const int &a, const int &b) {
	return a + b;
}
double add(const double &a, const double &b) {
	return a + b;
}

int getRand(int x) {
	return x % 2 + 1;
}
double getRand(double x) {
	return x + 5;
}

int typedef_func(int x) {
	return x;
}
int typedef_func(my_int x) {
	return x + 1;
}

void print_4(int a) {}
void print_4(char* a) {}
void print_4(const char* a) {}

void print_5(unsigned int a){}
void print_5(float a){}
// if) ���� ����� �ϵ�, ���� ���� ����Ÿ���� �ٸ��� �ϰ� ���� ��...
/*
int getRandomValue() {}
double getRandomValue() {}

sol 1) �����ε� ȸ��
int getRandomInt() {}
double getRnadomDouble() {}

sol 2) �����ε��� ���� ������ �Ķ���͸� ���.
int getRandomValue(int x) {}
double getRnadomValue(double x) {}

main()
	getRandomValue(int());	//������ Ʈ��...
*/
int main(){
	/////////////////////////////////////////////////////////////////////////////////////
	//					��	Function Overload	��
	// �����ε��� �Լ��� �� �����Ϸ��� �� �ִ� ���ڸ� �м���
	// �� �߿� ���� �Ű����� Ÿ���� �� �´� �Լ��� �˾Ƽ� ã��
	// �� �Լ��� �����Ų��.
	// 
	// ���� 1) ����Ÿ�Ը� �ٸ��ٰ��ؼ� �Լ� �����ε��� �ƴϴ�. (���� ������ Ÿ���� �޶�� ��.)
	/////////////////////////////////////////////////////////////////////////////////////

	//			// (1) - �Լ� �����ε� �⺻
	//cout << add(1, 2) << endl;	//�� �ܿ��� �����ε��� ������ �� �Լ��� ��� �Լ��� ���������� compile time�� �����Ǿ�� �Ѵ�.
	//cout << add(3.1, 4.2) << endl;

	//			// (2) - ���� Ÿ�Ը� �ٸ��� �ϰ� ���� ��... (�ذ���)
	//cout << getRand(int()) << endl;	//���ڷδ� 0���� ����.
	//cout << getRand(double()) << endl;	//���ڷδ� 0.0���� ����.

	//			// (3) - typedef�� �ѹ� ������ ���� ������ �����ε��� �õ��ϸ�...?
	//typedef_func(int());
	//typedef_func(my_int());		// ������ Ÿ�ӿ��� �� Ÿ���� ���� ������ �����Ͽ� �����ε� ����...

				// (4) - �� �� �������� ����(1) - �� �´°� ��� ������ �ִ� �͵� �߿��� ã�µ� �� �� �¾Ҵ� ���
	print_4(0);
	print_4('a');	//�ǵ��ʹ� �ٸ��� int �Ķ���͸� ������ �Լ��� �����ε� �Ѵ�.
	print_4("a");	//�����ε��� �Լ��� ���� ������ �����޽����� ����. (3��° �����ε��� �Լ��� ȣ���ؾ���.)

				// (5) - �� �� �������� ����(2) - �����ε� �� �Լ����� �Ķ���Ϳ� �ٵ� �ʹ� �� �¾� ��ȣ�� ���(ambiguous...)
	/*print_5('a');
	print_5(0);
	print_5(3.141592);*/

	//�ذ���
	print_5((unsigned int)'a');	//type casting
	print_5(0u);				//u Ű���� (unsigned)
	print_5(3.141592f);			//f Ű���� double -> (float)
	
	return 0;
}