#include <iostream>

enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE
};

void printColorName_ifelse(Colors color)
{
	using namespace std;
	if (color == Colors::BLACK)
		cout << "BLACK" << endl;
	else if (color == Colors::WHITE)
		cout << "WHITE" << endl;
	else if (color == Colors::RED)
		cout << "RED" << endl;
	else if (color == Colors::BLUE)
		cout << "BLUE" << endl;
	else
		cout << "BLUE" << endl;

	return;
}

void printColorName_switch(Colors color)
{
	using namespace std;

	switch (color)
	{
	case Colors::BLACK:
		cout << "BLACK";
		break;
	case Colors::WHITE:
		cout << "WHITE";
		break;
	case Colors::RED:
		cout << "RED";
		break;
	case Colors::GREEN:
		cout << "GREEN";
		break;
	case Colors::BLUE:
		cout << "BLUE";
		break;
	default:
		cout << "default";
		break;
	}

	cout << endl;
}

void printColorName_switch_with_staticcast(Colors color)
{
	switch (static_cast<int>(color)) 
	{
		using namespace std;
	case 0:
		cout << "black";
		break;
	case 1:
		cout << "white";
	case 2:
		cout << "red";
	}
	std::cout << std::endl;

	return;
}
int main()
{
	using namespace std;

	/*			//Pra 0.
	printColorName_ifelse(Colors::BLACK);

	printColorName_switch(Colors::RED);

	printColorName_switch_with_staticcast(Colors::WHITE);
	*/

	/*			//Pra1. Fundamental Syntax
	int x;
	cin >> x;

	{
		switch (x)
		{
		case 0:
			cout << "Zero";
			break;
		case 1:
			cout << "One";
			break;
		case 2:
			cout << "Two";
			break;
		case 3:
			cout << "Three";
			break;
		default:
			cout << "Default";
			break;
		}

		cout << endl;
	}
	*/

	/*				//Pra2. 주의 사항
	int x;
	cin >> x;

	switch (x)
	{
		int a;				// 케이스문 안에선 선언은 가능하지만,
		int b = 5;			// 초기화는 안되고, case문 이후에만 가능하다.

	case 0:
		a = 1;
		cout << a << endl;
		break;
	case 1:
		break;
	}
	*/

	int x;
	cin >> x;

	switch (x)
	{
		int a, y;

	case 0:
		y = 5;
		y += x;
		cout << y << endl;
		break;
	case 1:
		y = 5;
		y -= x;
		cout << y << endl;
		break;
	default:
		cout << "Undefined input" << endl;
		break;

	}

	return 0;
}
