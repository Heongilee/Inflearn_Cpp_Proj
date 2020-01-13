#include <iostream>

int main() 
{
	using namespace std;

	enum Color
	{
		RED,
		BLUE,
		YELLOW,
	};

	enum Fruit 
	{
		BANANA,
		APPLE
	};

	Color color1 = RED;
	Color color2 = YELLOW;

	Fruit fruit1 = BANANA;
	Fruit fruit2 = APPLE;

	if (color1 == fruit1)
	{
		cout << "color true !" << endl;
	}
	else if (fruit1 == fruit2)
	{
		cout << "fruit true !" << endl;
	}
	else
	{
		cout << "???" << endl;
	}
	return 0;
}