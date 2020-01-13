#include <iostream>
#include "My_constants.h"

using namespace std;

void doSomething()
{
	cout << "In main2.cpp pi"<< Constants::pi <<"And Address is"<<&Constants::pi<< endl;

	return;
}