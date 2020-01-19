#include <iostream>
#include <cmath> // sin(), cos() ���̺귯��...
#include <vector>	// std::vector�� ����ϱ� ���� ���̺귯��...
using namespace std;
constexpr auto PI = 3.141592;	// static�� ��������μ� �ش� �Լ� �ȿ��� �Ź� ȣ��ø��� ���� �ʱ�ȭ ��Ű�� ����.;
typedef const int* C_INT_P;		// foo2()�� ���ظ� ���� ���� ������ ���� ��. const int* �� C_INT_P�� ����.

void doSth(int y) {
	cout << "In doSth() : " << y << " " << &y << endl;
	return;
}
void addOne(int& y) {
	y += 1;
	cout << "In addOne() : " << y << " " << &y << endl;

	return;
}

//C++���� ���� ���̴� �޼ҵ� ����. (const Ÿ��)�̸� �Է��̱���, (Ÿ��& )���۷��� ��ȣ ���� ����̱���.
void getSinCos(const double degree, double& sinOut, double& cosOut){
	static const double pi = 3.141592 / 180.0;	// static�� ��������μ� �ش� �Լ� �ȿ��� �Ź� ȣ��ø��� ���� �ʱ�ȭ ��Ű�� ����.
	const double rad = degree * pi;	// degree(����)�� �������� �ٲٴ� ����.

	//�� ���� Parameter�� ����� ���۷��� ������ ��� ���� ������ �� �ΰ��� ��ȯ�ϴ� �� ó�� �۵���.
	sinOut = std::sin(rad);
	cosOut = std::cos(rad);

	return;
}

void foo(const int& x) {
	cout << x << endl;

	return;
}
void foo2(C_INT_P &p) {
	cout << p << " " << &p << endl;

	return;
}
void printElement(int (&arr)[5]) {
	return;
}
void printElement2(vector<int>& arr) {
	return;
}
int main() {
	//////////////////////////////////////////////////////////////////////////////
	// 7 - 2
	//////////////////////////////////////////////////////////////////////////////

	int x = 6;

	cout << "In main() : " << x << " " << &x << endl;

	doSth(5);
	doSth(x);
	doSth(x + 1);

	//////////////////////////////////////////////////////////////////////////////
	// 7 - 3
	//////////////////////////////////////////////////////////////////////////////

	addOne(x);

	double sin(0.0);	//cmath ���̺귯������ ������ sin�̶� ��ü�� �ν��Ͻ�ȭ �Ѵ�.
	double cos(0.0);

	getSinCos(30.0, sin, cos);

	cout << sin << " " << cos << endl;

	foo(6);	//�޴��ʿ��� ���۷����� �޾ƾ��ϴµ� ���ͷ�(��� ��)�̶� �ּҰ� ��� ���� �߻�...
	// const Ÿ�� ���۷��� �Ķ���ͷ� ������ �ذ�.
	

					// �����͸� ���۷����� �����ϴ� ���...
	C_INT_P p = &x;

	cout << p << " " << &p << endl;
	foo2(p);

					//array�� �Ķ���ͷ� �����ϴ� ���...
	int arr[]{ 1, 2, 3, 4, 5 };
	vector<int> arr2{ 6, 7, 8, 9, 10 };

	printElement(arr);

	printElement2(arr2);

	return 0;
}