#include <iostream>
#include <string>

using namespace std;

int main() {
	//////////////////////////////////////////////////////////////////////////////////
	//						 ��	����� ���α׷���	��
	//////////////////////////////////////////////////////////////////////////////////
	//syntax error(���� ����)

	//semantic error(���� ���� / �ǹ� ����) -> ����� ��� ��.
	int x;
	cin >> x;
	if (x >= 5)	// '=' �ϳ� ������ ������ �ߴ� ��. (5�� ��� �ǹ̰� ���� ����.)
		cout << "x is greater than 5" << endl;
	
	// violated assumption(���� ���� : ����ڰ� ���� �ۼ��� �Ͱ� ���� �ٸ� ������� ���α׷��� ����Ѵ�.)
	std::string hello{ "Hello, My name is Heongi" };

	int ix;
	cin >> ix;

	cout << hello.at(ix) << endl;

	return 0;
}