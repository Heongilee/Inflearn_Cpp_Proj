#include <iostream>



int main()
{
	using namespace std;

	/*				//Pra1. continue가 do-while과 사용될 때 애매해지는 경우.
	int cnt(0);

	do
	{
		if (cnt == 5) continue;

		cout << cnt << endl;

		cnt++;
			//증가연산을 반복문 안에, continue 이후에 두었기 때문에 증감이 안되고
			//cnt가 5인 상태에서 무한루프 상태에 빠졌다.
	} while (cnt < 10);
	*/

	//Pra2. while반복문에 break를 걸어주는게 for보다 쉬울 수 있는 case
//a, b, c를 입력 받았을 때 계속하고 , 이외에는 break

	int cnt(0);
	bool escape_flag = true;

	char ch;
	while (escape_flag)
	{
		cin >> ch;

		if (ch == 'a' || ch == 'a' - 32 || ch == 'b' || ch == 'b' - 32 || ch == 'c' || ch == 'c' - 32)
			cout << ch<<endl;
		
		else escape_flag = false;
	}

	cout << "Break!!" << endl;
	return 0;
}