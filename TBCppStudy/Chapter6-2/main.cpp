#include <iostream>

#define NUM_STU 100000

void doSomething(int students_scores[])
{
	using namespace std;

	cout << (int)&students_scores << endl;
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	cout << "size of doSomething : " << sizeof(students_scores) << endl;
	//32��Ʈ ȯ�濡�� ������ �ϸ� ������ ������ ����� 4����Ʈ(1word)
	//64��Ʈ ȯ�濡�� ������ �ϸ� ������ ������ ����� 8����Ʈ(2word)
}

int main() 
{
	using namespace std;

	const int num_stus = 20;	//�迭 ũ�⸦ ��������� ����
	//cin >> num_stus;

	int students_scores[num_stus] = {1, 2, 3, 4, 5, };

	//			//Pra1. �迭�� �ּ� �� 10������ ���
	//cout << (int)&students_scores << endl;	//�迭 ��ü�� �ּ�
	//cout << (int)&(students_scores[0]) << endl;
	//cout << (int)&(students_scores[1]) << endl;
	//cout << (int)&(students_scores[2]) << endl;

	cout << (int)&students_scores << endl;
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	cout << "size of main : " << sizeof(students_scores) << endl;

	doSomething(students_scores);

	return 0;
}