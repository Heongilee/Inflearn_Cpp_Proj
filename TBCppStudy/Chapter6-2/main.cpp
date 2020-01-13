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
	//32비트 환경에서 컴파일 하면 포인터 변수의 사이즈가 4바이트(1word)
	//64비트 환경에서 컴파일 하면 포인터 변수의 사이즈가 8바이트(2word)
}

int main() 
{
	using namespace std;

	const int num_stus = 20;	//배열 크기를 상수변수로 지정
	//cin >> num_stus;

	int students_scores[num_stus] = {1, 2, 3, 4, 5, };

	//			//Pra1. 배열의 주소 값 10진수로 출력
	//cout << (int)&students_scores << endl;	//배열 자체의 주소
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