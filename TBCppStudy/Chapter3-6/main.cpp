#include <iostream>

int main() 
{
	using namespace std;

	//		//Pra1.
	//bool x = true;
	//bool y = false;
	//
	//bool hit = true;
	//int health = 10;

	////보통 조건을 중첩if로 두지 않고 다음과 같이 논리연산으로 묶는게 이점이 더 많다.
	//if (hit == true && health < 20)
	//	cout << "die" << endl;

	//		//Pra2.
	//int x, y;

	//cin >> x >> y;

	//if (!x == y)
	//{
	//	cout << "[!x == y] 기대 값 : Equal" << endl;
	//	cout << "[!x == y] 실제 값 : " << (!x == y) << endl;
	//}
	//else if (!(x == y))
	//{
	//	cout << "[!(x == y)] 값 : " << !(x == y) << endl;
	//}
	//else if (x != y)
	//	cout << "[x != y] 값 : " << (x != y) << endl;
	//else
	//	cout << "???" << endl;

	//		//Pra3. 흔히 쓰이는 패턴 1
	//		//y가 5가 되기 까지 몇번 순회 하는지 조사.
	//int x = 1, y = 2;
	//int cnt = 0;	
	//
	//while (1)
	//{
	//	//많이 쓰이는 패턴
	//	if (x == 1 && ++y == 5) break;

	//	cnt++;
	//}
	//cout << cnt << endl;

	//		//Pra4. Short Circuit Evaluation Algorithm
	//int x = 2, y = 2;

	//if (x == 1 && y++ == 2)
	//{
	//	//do Something
	//	/*
	//						--------------------->
	//	우선 순위 계산 순서 [{x == 1} && {(y++) == 2}]
	//	①x는 1이 아니기 때문에 False
	//	②논리AND(&&)는 알고리즘 상 False 가 나와버리면
	//	뒤에 있는 표현식을 처리하지 않는다.
	//	③그렇기에 핵심은 y++가 연산되지 않는다는 것.
	//	④그래서 결과 출력시 2가 나온다.
	//	*/
	//}

	//cout << y << endl;	//2

	//		//Pra 5. De Morgan's Law
	//bool x, y;

	//cin >> x >> y;

	//if ((!(x && y)) == (!x && !y))
	//	cout << "De Morgan's Law" << endl;
	//else
	//	cout << "???" << endl;

	//		//Pra6. 
	///*
	//XOR	Exclusive-OR	(다르면 T, 같으면 F)
	//	INPUT	RESULT
	//	0	0	F
	//	0	1	T
	//	1	0	T
	//	1	1	F
	//*/
	//if (x != y)
	//{
	//		// T
	//}
	//else // F




	return 0;
}