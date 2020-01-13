#include <iostream>

void doSomething(int scores[]) 
{
	using namespace std;

	for (int i = 0;i < sizeof(scores) / sizeof(int);i++)	//X86ȯ�� : 1���� ���		|| X64ȯ�� : 2���� ���.
	{
		cout << "[" << i << "] idx : " << scores[i] << endl;
	}

	return;
}

int main() 
{
	using namespace std;

	//const int num_stus = 5;
	int scores[] = { 84, 92, 76, 81, 56 };

	int max_score = 0;

	for (int i = 0;i < sizeof(scores) / sizeof(int);i++)
	{	//main �̶� for ������ ���� ���� �ۼ��� �� �ִ�. �迭�� �ּҸ� �Ķ���ͷ� �ѱ� �� �Լ��ȿ��� ���� ���� for�� �ۼ� �Ұ�.
		max_score = (scores[i] > max_score) ? scores[i] : max_score;
	}
	cout << "max_score = " << max_score << endl;

	//�Լ� ���� ����غ���. for�� ������ ���� ���� !
	doSomething(scores);

	return 0;
}