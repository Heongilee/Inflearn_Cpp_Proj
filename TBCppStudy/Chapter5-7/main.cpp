#include <iostream>

int pow(int base, int exp)
{	//base^exponent
	int temp = 1;
	for (int i = 0;i < exp;i++)
		temp *= base;

	return temp;
}
 

int main() 
{
	using namespace std;

	/*				//Pra1.
	for (int cnt = 0;cnt < 10;cnt++)
		cout << cnt << endl;
	*/

	/*				//Pra2.
	cout << pow(2, 3) << endl;
	*/

	/*				//Pra3. for문에서 변수 2개를 운용하는 경우.
	for(int i=0, j=0;(i+j)<10;i++,j+=2)
	{
		cout << i << " " << j << endl;
	}
	*/

	/*				//Pra4.
	for (int j = 0;j < 9;j++)
		for (int i = 0;i < 9;i++)
		{
			cout << i << " " << j << endl;
		}
	*/

					//Pra5. unsigned형의 범위 중에 음수 값은 없기 때문에 조건에 걸리지 않고 무한으로 반복된다.
	for (unsigned int i = 9;i >= 0;i--)
		cout << i << endl;

	return 0;
}