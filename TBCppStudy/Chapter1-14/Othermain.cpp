#include <iostream>
//#define LIKE_APPLE

void Func1(void) {
	using namespace std;

	#ifdef LIKE_APPLE
		cout << "apple" << endl;

	#endif
	#ifndef LIKE_APPLE
		cout << "Orange" << endl;

	#endif

	return;
}