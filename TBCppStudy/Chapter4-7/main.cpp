#include <iostream>
#include <typeinfo>
#include <string>

/*		//���� �Ϸ��� ��.
ĳ���Ͱ� �¾Ҵµ�
����ġ�� �󸶳� ����ϴ���
����ϴ� �Լ�

Q. ���α׷��� ���忡�� �����ȣ�� ������ ����ϱ� ��ƴ�.

Sol 1. ������ �̿�
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

enum Color	//Enumerated Type(������)
			//User-Defined Data Types(����� ���� �ڷ���)
{
	COLOR_BLACK = -3,
	COLOR_RED,
	COLOR_BLUE = 5,
	COLOR_GREEN = 5,
	COLOR_SKYBLUE,	//����� ���Ǹ� ���� ������ �ݷе� ���
	//BLUE,			//���� �ٸ� �׷��� Eumeration�� �������� �����Ͽ� �ߺ��� ������ ����
};

enum Feeling 
{
	HAPPY,
	JOY,
	TIRED,
	//BLUE,			//���� �ٸ� �׷��� Eumeration�� �������� �����Ͽ� �ߺ��� ������ ����.
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

				//Pra2.	enum�� ���� ó�� �� �� ���� �� ������ �ƴϴ�.
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

		/*	// ���ڿ��� �Է� �޴´�(���� X)
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