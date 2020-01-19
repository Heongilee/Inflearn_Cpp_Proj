#include <iostream>

using namespace std;

//첫번 째 인자를 reference로 받아왔는데 값 복사가 일어나지 않는다는 특징이 있다.
void foo(const int &referenc_value, const int value) {

	cout << "값 복사가 일어나지 않기 때문에 주소가 같다. : "<<referenc_value << "\t"<< &referenc_value << endl;
	cout << "값 복사가 일어나(Call By Value) 주소가 다르다. : "<< value << "\t" << &value << endl;

	return;

}
int main() {
	int input = 4;

	cout << input << "\t" << &input << endl;

	foo(input, input);

	return 0;
}