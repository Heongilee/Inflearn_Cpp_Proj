#include <iostream>

using namespace std;

int getInt()
{
	while (1)
	{
		cout << "Enter a integer number : ";
		int x;
		cin >> x;

		if (std::cin.fail())
		{
			//std::cin.clear();
			std::cin.ignore(static_cast<int>(numeric_limits<short>::max()), '\n');
			cout << "Number is Overflowed. Plz try Again." << endl;//오버플로우 값을 입력한 경우
		}
		else
			return x;
	}
}

char getOpr()
{

	while (1)
	{
		cout << "Enter an Opr(+, -)";	//Todo. More Opr *, /, % ...
		char opr;
		cin >> opr;
		std::cin.ignore(static_cast<int>(numeric_limits<short>::max()), '\n');

		if (opr == '+' || opr == '-') return opr;
		else cout << "Invalid operator. Plz try Again." << endl;
	}

	
}

void printResult(int x,char op, int y)
{
	cout << x << " " << op << " " << y << " = ";
	if (op == '+')cout << x + y;
	else cout << x - y;

	cout << endl;

	return;
}
int main() 
{
	int x = getInt();
	char op = getOpr();
	int y = getInt();

	printResult(x, op, y);

	return 0;
}