#include <iostream>
#include <cstdarg>

using namespace std;

double find_Average(const int cnt, ...) {
	va_list list;
	int sum = 0;

	va_start(list, cnt);

	for (int i = 0; i < cnt; i++)
		sum += va_arg(list, int);

	va_end(list);
	return (double)sum / cnt;
}
int main() 
{
	/*-----------------------------------------------------------------------------------------------------------------
											��	Ellipsis(���� ��ȣ)	��
		1. ����
			�Լ��� �Ķ���͸� ���� ���� �� �ƹ� ���� �ƹ����Գ� �־��ְ� ���� ���� �ִ�.

		2. ���
			#include <cstdarg> (c standard argument) �� �߰������ش�.

		3. ����
			1) ...���� ����� � Ÿ���� �������� �Ķ���� �ܿ��� ����� ���� �ʾ�����, 
			����Ҷ��� �̸� Ÿ���� ������ �־�� �Ѵ�.
			2) Ellipsis�� ����ϴ� �Լ��� ù ��° �Ķ���ʹ� �ݵ�� int��(const ����, &(���۷��� ��ȣ) �Ұ���) ������ ����� �Ѵ�.
			3) ������ϱ� ����� ��Ÿ�ӿ����� ������ �� ������ �ֱ� ������ �� �� ���̰� ���ø����� ���� ���δ�.
	-----------------------------------------------------------------------------------------------------------------*/
	
	cout << find_Average(3, 1, 2, 3) << endl;
	cout << find_Average(1, 1, 2, 3, 'h', "Hello World!") << endl;
	cout << find_Average(10, 1, 2, 3, 4) << endl;

	return 0;
}