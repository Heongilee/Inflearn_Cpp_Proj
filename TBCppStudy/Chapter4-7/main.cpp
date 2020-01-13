#include <iostream>
#include <typeinfo>
#include <string>

/*		//지금 하려는 것.
캐릭터가 맞았는데
피해치를 얼마나 줘야하는지
계산하는 함수

Q. 프로그래머 입장에서 무기번호를 일일히 기억하기 어렵다.

Sol 1. 열거형 이용
*/

//Q...
int computeDamage(int weapon_id)
{
	if (weapon_id == 0)	//Sword
		return 1;
	if (weapon_id == 1)	//hammer
		return 2;

	//...
}

enum Color	//Enumerated Type(열거형)
			//User-Defined Data Types(사용자 정의 자료형)
{
	COLOR_BLACK = -3,
	COLOR_RED,
	COLOR_BLUE = 5,
	COLOR_GREEN = 5,
	COLOR_SKYBLUE,	//사용자 편의를 위해 마지막 콜론도 허용
	//BLUE,			//서로 다른 그룹의 Eumeration도 전역으로 간주하여 중복시 컴파일 에러
};

enum Feeling 
{
	HAPPY,
	JOY,
	TIRED,
	//BLUE,			//서로 다른 그룹의 Eumeration도 전역으로 간주하여 중복시 컴파일 에러.
};

int main() 
{
	using namespace std;

	/*			//Pra1.
	Color paint = COLOR_BLACK;
	Color house(COLOR_BLUE);
	Color apple{COLOR_RED};

	Color my_color = COLOR_BLACK;

	cout << my_color << " " << COLOR_BLACK << endl;
	cout << typeid(my_color).name() << endl;	//enum Color

	if (COLOR_BLUE == COLOR_GREEN)
	{
		cout << "Equal" << endl;
	}
	else cout << "Not Equal" << endl;
	*/

				//Pra2.	enum을 정수 처럼 쓸 수 있을 것 같지만 아니다.
	int color_id = COLOR_BLACK;

	//Color my_color_id1 = color_id;	//ERROR
	Color my_color = static_cast<Color>(color_id);	//OK

	//cin >> my_color;	//ERROR

		/*	// Detour Solution
		int in_number;	
		cin >> in_number;
		if (in_number == 0) my_color = COLOR_BLACK;
		//...
		cout << color_id << endl;
		*/

		/*	// 문자열로 입력 받는다(권장 X)
		string input_str;
		getline(cin, input_str);

		if (input_str == "COLOR_BLACK")
		{
			my_color = static_cast<Color>(0);
		}
		//...
		*/


	return 0;
}