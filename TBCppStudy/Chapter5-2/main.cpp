#include <iostream>

int main() 
{
	using namespace std;
	
	/*			//Pra1.
	int x;
	cin >> x;

	if (x > 10)
		cout << x << "is greater than x" << endl;
	else
		cout << x << "is not greater than x" << endl;
	*/

	/*			//Pra2.
	int x;
	cin >> x;

	if (1) 
		int x = 5;	
	//Nested block을 벗어나기때문에 이 문장은 의미가 없어진다.
	else 
		int x = 6;

	cout << x << endl;
	*/

	/*			//Pra3.
	int x;
	cin >> x;

	if (x > 10)
		cout << "x is greater than 10" << endl;
	else if (x < 10)
		cout << "x is lether than 10" << endl;
	else
		cout << "x is 10" << endl;
	*/

	/*			//Pra4.
	int x, y;
	cin >> x >> y;

	if (x>0 && y>0) cout << "both Numbers are positive" << endl;
	else if (x > 0 || y > 0) cout << "one of Numbers is positive" << endl;
	else cout << "Neither number are positive" << endl;
	*/

	/*			//Pra5.
	int x;
	cin >> x;

	if (x > 10)
		;	//NULL Statement (프로그래머의 의도와 다를 수 있다.)
	{
		x = 1;
	}
	*/

	/*			//Pra6.
	int x;
	cin >> x;

	if (x = 0)	//x = 0; if(x);		프로그래머의 의도와 다른 케이스
		cout << "절대로 들어올 수 없는 Section" << endl;
	else
		cout << x << endl;
	*/


	return 0;
}