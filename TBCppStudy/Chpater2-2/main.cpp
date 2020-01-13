#include <iostream>
#include <limits>

int main() {
	using namespace std;

	//unsigned int ÀÇ Overflow & Underflow
	cout << "max() " << numeric_limits<signed int>::max() << endl;
	cout << "min() " << numeric_limits<signed int>::min() << endl;

	signed int Max = numeric_limits<signed int>::max();
	signed int min = numeric_limits<signed int>::min();

	Max += 1;
	min--;

	cout << "[Overflow] Max + 1	=	" << Max << endl;
	cout << "[Underflow] min - 1	=	" << min << endl;


	return 0;
}