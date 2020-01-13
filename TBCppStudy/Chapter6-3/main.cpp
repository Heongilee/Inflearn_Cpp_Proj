#include <iostream>

void doSomething(int scores[]) 
{
	using namespace std;

	for (int i = 0;i < sizeof(scores) / sizeof(int);i++)	//X86환경 : 1번만 출력		|| X64환경 : 2번만 출력.
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
	{	//main 이라서 for 조건을 위와 같이 작성할 수 있다. 배열의 주소를 파라미터로 넘길 시 함수안에서 위와 같은 for문 작성 불가.
		max_score = (scores[i] > max_score) ? scores[i] : max_score;
	}
	cout << "max_score = " << max_score << endl;

	//함수 만들어서 출력해보기. for문 조건은 위와 같이 !
	doSomething(scores);

	return 0;
}