#include <iostream>



int main()
{
	using namespace std;

	/*				//Pra1. continue�� do-while�� ���� �� �ָ������� ���.
	int cnt(0);

	do
	{
		if (cnt == 5) continue;

		cout << cnt << endl;

		cnt++;
			//���������� �ݺ��� �ȿ�, continue ���Ŀ� �ξ��� ������ ������ �ȵǰ�
			//cnt�� 5�� ���¿��� ���ѷ��� ���¿� ������.
	} while (cnt < 10);
	*/

	//Pra2. while�ݺ����� break�� �ɾ��ִ°� for���� ���� �� �ִ� case
//a, b, c�� �Է� �޾��� �� ����ϰ� , �̿ܿ��� break

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