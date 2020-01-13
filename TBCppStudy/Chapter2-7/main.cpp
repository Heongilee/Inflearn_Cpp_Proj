#include <iostream>
#include <limits>

int main() 
{
	using namespace std;

	//			//Pra1.
	//char c1(65);
	//char c2('A');

	////C-style Casting
	//cout << (char)65 << endl;	//65를 character로 바꾼다.
	//cout << (int)'A' << endl;

	////C++ style Casting
	//cout << char(65) << endl;	//65로 초기화 되는 char를 생성한다.
	//cout << int('A') << endl;

	//cout << static_cast<char>(65) << endl;
	//cout << static_cast<char>('A') << endl;

	//char ch(97);
	//cout << ch << endl;
	//cout << static_cast<int>(ch) << endl;
	//cout << ch << endl;
	//

	//			//Pra2.
	//cout << sizeof(unsigned char) << endl;
	//cout << (int)numeric_limits<unsigned char>::max() << endl;
	//cout << numeric_limits<char>::min() << endl;
	//cout << (int)numeric_limits<unsigned char>::lowest << endl;
	//

				// Pra3.
	char c1(65);
	wchar_t c2;
	char16_t c3;
	char32_t c4;

	cout << "This is first Line \nSecond Line"<<endl;
	cout << "THIS IS FIRST LINE" << endl;
	cout << "THIS IS SECOND LINE" << endl;


	return 0;
}