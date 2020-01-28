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
											※	Ellipsis(생략 부호)	※
		1. 개요
			함수의 파라미터를 내가 원할 때 아무 때나 아무렇게나 넣어주고 싶을 때가 있다.

		2. 사용
			#include <cstdarg> (c standard argument) 를 추가시켜준다.

		3. 주의
			1) ...으로 명시해 어떤 타입이 들어올지는 파라미터 단에서 명시해 놓지 않았지만, 
			사용할때는 미리 타입이 정해져 있어야 한다.
			2) Ellipsis를 사용하는 함수의 첫 번째 파라미터는 반드시 int형(const 가능, &(레퍼런스 기호) 불가능) 변수를 써줘야 한다.
			3) 디버깅하기 힘들고 런타임에서도 오류가 날 위험이 있기 때문에 잘 안 쓰이고 템플릿에서 가끔 쓰인다.
	-----------------------------------------------------------------------------------------------------------------*/
	
	cout << find_Average(3, 1, 2, 3) << endl;
	cout << find_Average(1, 1, 2, 3, 'h', "Hello World!") << endl;
	cout << find_Average(10, 1, 2, 3, 4) << endl;

	return 0;
}