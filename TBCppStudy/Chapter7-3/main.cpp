#include <iostream>

using namespace std;

//ù�� ° ���ڸ� reference�� �޾ƿԴµ� �� ���簡 �Ͼ�� �ʴ´ٴ� Ư¡�� �ִ�.
void foo(const int &referenc_value, const int value) {

	cout << "�� ���簡 �Ͼ�� �ʱ� ������ �ּҰ� ����. : "<<referenc_value << "\t"<< &referenc_value << endl;
	cout << "�� ���簡 �Ͼ(Call By Value) �ּҰ� �ٸ���. : "<< value << "\t" << &value << endl;

	return;

}
int main() {
	int input = 4;

	cout << input << "\t" << &input << endl;

	foo(input, input);

	return 0;
}