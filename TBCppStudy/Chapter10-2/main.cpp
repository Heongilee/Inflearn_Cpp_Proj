#include "Myheader.h"
#include "Monster.h"
#include "Position2D.h"

using namespace std;

int main() {
	Monster mob1("Devil", Position2D(0, 0));
	Monster mob2("Gargoyle", Position2D(0, 0));

	cout << mob1 << endl;

	//while (true)	//game loop
	{
		//event :: mob1이 1, 1 위치로 이동한다.
		mob1.moveTo(Position2D(1, 1));
		mob1.moveTo(Position2D(3, -1));

		cout << mob1 << " " << mob2 << endl;
	}
	return 0;
}