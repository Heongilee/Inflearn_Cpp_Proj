#include <iostream>

int main()
{
	using namespace std;

	/*			//반복문의 필요성
	cout << 1 << endl;
	cout << 2 << endl;
	//,,,

	cout << 9 << endl;	*/

	/*				//Pra1.
	int cnt = 0;

	cout << "While-loop test" << endl;

	while (cnt < 10)
	{	//Infinite Loop
		cout << cnt << endl;

		cnt++;
		_sleep(100);
	}
	*/

	/*				//Pra2. 카운트 초기화를 굳이 while문 안에 넣고 싶었다.

	cout << "While-loop test" << endl;

	while (cnt < 10)
	{	//Infinite Loop
		static int cnt = 0;
		cout << cnt << endl;

		cnt++;
		_sleep(100);
	}
	*/

	/*				//숙제. while을 goto문으로 풀어보기.

	int cnt = 0;

tryAgain:
	cout << cnt << endl;
	cnt++;

	if (cnt <= 10) goto tryAgain;
	*/

	/*				//Pra3. count 변수를 unsigned 로 두었을 때 발생할 수 있는 에러 case 1

	unsigned int cnt = 10;

	while (cnt >= 0)
	{
		if (cnt == 0) cout << "Zero";
		else cout << cnt << " ";

		cnt--;
		_sleep(100);
	}	*/

					//Pra4. 
	cout << "While-loop test";

	int outer_cnt = 0;

	while (outer_cnt <= 5)
	{
		int inner_cnt = 1;
		while (inner_cnt <= outer_cnt)
		{
			cout << inner_cnt++ << " ";
		}
		cout << endl;
		outer_cnt++;
	}


	return 0;
}