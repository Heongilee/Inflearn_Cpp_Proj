#include <iostream>
#include "My_constants.h"
using namespace std;

void doSomething();	// Forward Declaration
extern int a;
int value = 123;	// Internal Linkage
static int g_a = 4;	// 다른 cpp파일에서 접근 안된다(Internal Linkage)

int main() 
{
	/*	//Pra1. 
	cout << value << endl;
	int value = 1;	// Local Variable. Scope와 Duration이 중괄호 안으로 제한 되는 변수.
					// 위에 똑같은 이름으로 초기화한 변수에 의해 해당 변수는 Name Hiding이 된다.

	cout << value << endl;
	cout << ::value << endl;	//Global Scope Operator를 이용해 전역변수값을 출력.
	*/

	/*	//Pra2.
	doSomething();
	doSomething();
	doSomething();
	doSomething();
	*/

		//Pra3.
	cout << "In main.cpp pi" << Constants::pi << "And Address is" << &Constants::pi << endl;
	doSomething();


	return 0;
}