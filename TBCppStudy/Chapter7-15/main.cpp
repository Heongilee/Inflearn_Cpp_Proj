#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) 
{
	/*
	scripting ���(java --version �̳� docker, mvn ���� Ŀ�ǵ�� ���α׷��� ������Ű�� ���)�� �ڵ��� ���δ�.

	�����ڷ� > ���۸� �غ� ��.

	* Boost Library :: ũ�ν� �÷���(	Cross Platform || Multi Platform : ũ�ν� �÷����� �����ϴ� ��ǥ���� ���� Java�� �ִ�.
										�����Ϸ��� ȯ���� �и���Ű�� ������ �������� ���̳� �������� ������.)
	* Qt :: GUI���α׷� ���߿� ���̴� ũ�ν� �÷��� �����ӿ�ũ
	* PyQt :: Qt + Python ���ε�

	*/
	//argc : command argument�� �Է��� ���� ����
	//argv : command argument�� �Է��� ���ڿ�
	for (int cnt = 0; cnt < argc; cnt++) {
		string argv_single = argv[cnt];

		if (cnt == 1) {
			int input_num = stoi(argv_single);	//<string> Library

			cout << input_num + 1 << endl;
		}
		else {
			cout << argv_single << endl;
		}
	}
	cout << endl;
	return 0;
}