#include <iostream>
#include "My_constants.h"
using namespace std;

void doSomething();	// Forward Declaration
extern int a;
int value = 123;	// Internal Linkage
static int g_a = 4;	// �ٸ� cpp���Ͽ��� ���� �ȵȴ�(Internal Linkage)

int main() 
{
	/*	//Pra1. 
	cout << value << endl;
	int value = 1;	// Local Variable. Scope�� Duration�� �߰�ȣ ������ ���� �Ǵ� ����.
					// ���� �Ȱ��� �̸����� �ʱ�ȭ�� ������ ���� �ش� ������ Name Hiding�� �ȴ�.

	cout << value << endl;
	cout << ::value << endl;	//Global Scope Operator�� �̿��� ������������ ���.
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