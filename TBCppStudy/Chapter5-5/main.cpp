#include <iostream>

int main()
{
	using namespace std;

	/*			//�ݺ����� �ʿ伺
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

	/*				//Pra2. ī��Ʈ �ʱ�ȭ�� ���� while�� �ȿ� �ְ� �;���.

	cout << "While-loop test" << endl;

	while (cnt < 10)
	{	//Infinite Loop
		static int cnt = 0;
		cout << cnt << endl;

		cnt++;
		_sleep(100);
	}
	*/

	/*				//����. while�� goto������ Ǯ���.

	int cnt = 0;

tryAgain:
	cout << cnt << endl;
	cnt++;

	if (cnt <= 10) goto tryAgain;
	*/

	/*				//Pra3. count ������ unsigned �� �ξ��� �� �߻��� �� �ִ� ���� case 1

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