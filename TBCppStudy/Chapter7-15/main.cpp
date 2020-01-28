#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) 
{
	/*
	scripting 방식(java --version 이나 docker, mvn 같은 커맨드로 프로그램을 구동시키는 방식)의 코딩에 쓰인다.

	참고자료 > 구글링 해볼 것.

	* Boost Library :: 크로스 플랫폼(	Cross Platform || Multi Platform : 크로스 플랫폼을 지원하는 대표적인 언어에는 Java가 있다.
										컴파일러와 환경을 분리시키기 때문에 유지보수 면이나 편리성에서 유용함.)
	* Qt :: GUI프로그램 개발에 쓰이는 크로스 플랫폼 프레임워크
	* PyQt :: Qt + Python 바인딩

	*/
	//argc : command argument로 입력한 인자 개수
	//argv : command argument에 입력한 문자열
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