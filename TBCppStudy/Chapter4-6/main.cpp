#include <iostream>
#include <string>
int main() 
{
	using namespace std;

	/*			//Pra1. Syntax
	const char my_strs[] = "Hello, World";	//기본 자료형
	const string My_hello = "Hello, World";	//사용자 정의 자료형
	const string My_hell{ "Hello, World!" };
	string my_ID = "123";

	cout << "Hello, World" << endl;	//string
	cout << My_hello << endl;
	*/

				//Pra2. 
	cout << "Your age ? : ";
	string age;
	cin >> age;
	//std::getline(std::cin, age);
	
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	cout << "Your name ? : ";
	string name;
	//cin >> name;	//띄어쓰기 할 경우 버퍼 문제 발생
	std::getline(std::cin, name);	//라인 단위로 읽는다

	cout << name << " " << age << endl;
	

	/*			//Pra3.
	string a("Hello, ");
	string b("World");
	string hw(a+b);		//Append : 문자열 더하기

	//Append 기능은 string라이브러리 안에 정의되어 있기
	//때문에 사용 가능하다.

	hw += "I'm Good";

	cout << hw << endl;
	*/

	/*			//Pra4.
	string a("Hello, World");

	cout << a.length() << endl;
	//문자열 길이 (NULL character 제외한 길이.)
	*/

	return 0;
}