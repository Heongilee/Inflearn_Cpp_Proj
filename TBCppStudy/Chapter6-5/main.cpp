#include <iostream>

using namespace std;

int main() 
{
	const int row = 3, col = 5;

	// row-major 방식 <-> col-major 방식도 있다.
	int arr[][col] {
		{1, 2,},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15}
	};

	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < col;j++)
		{
			//cout << '[' << i << "][" << j << ']' << '\t';
			cout << arr[i][j] << '\t';
			//cout << (int)&arr[i][j] << '\t';
		}
		cout << endl;
	}
}