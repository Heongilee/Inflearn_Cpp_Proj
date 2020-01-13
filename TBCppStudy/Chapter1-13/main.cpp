#include <iostream>
using namespace std;

namespace Myspace1 {
	namespace Innerspace {
		int doSomething(int a, int b) {
			return a - b;

		}
	}
	int doSomething(int a, int b) {
		return a + b;

	}
}
namespace Myspace2 {
	namespace Innerspace {
		int doSomething(int a, int b) {
			return a / b;

		}
	}
	int doSomething(int a, int b) {
		return a * b;
	}
}

int main() {
	int a, b;

	cin >> a >> b;
	
	if (a > b) {
		using namespace Myspace1;
		cout << doSomething(a, b) << endl;
	}
	else {
		using namespace Myspace2;
		cout << doSomething(a, b) << endl;
	}

	return 0;
}
