#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>

using namespace std;

int main() 
{
						//Pra1. output
	const int const_fibo[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
	int variable_fibo[] = { 0, 1, 1, 2, 3, 5, 3000, 13, 21, 34, 55, 89 };

	for (int number : const_fibo)	//number가 fibo에 있는 배열의 값들을 순회한다.
		cout << number << " ";
	cout << endl;

	/*result*/
	/*
	
	0 1 1 2 3 5 8 13 21 34 55 89

	*/

	//					//Pra2. change array values (ERROR)
	//for (int i : variable_fibo)
	//	i = 10;

	//for (int j : variable_fibo)
	//	cout << j << " ";

	///*result*/
	///*			변경이 안 된다.

	//0 1 1 2 3 5 8 13 21 34 55 89

	//*/


	//					//Pra3. change array values (Correction)
	//for (auto& i : variable_fibo)	//auto로 주로 둔다. reference variable로 접근하여 값을 바꾸겠다는 의미를 보인다.
	//	i *= 10;

	//for (const auto &j : variable_fibo)	//출력부이기 때문에 const로 값을 바꾸지 않겠다는 의미를 보인다.
	//	cout << j << " ";
	//cout << endl;

	//					//Pra4. 
	//int max = std::numeric_limits<int>::lowest();	//int 정수 범위 중 가장 최솟값을 대입시킴.

	//for (const auto &number : variable_fibo)
	//	max = std::max(max, number);	//<algorithm> \ std::max(A, B) A값과 B값중 가장 큰 값을 반환함.

	//cout << max << endl; 

						//Pra5. Vector 라이브러리 맛보기 : 동적할당 배열 대신에 코드를 간결하게 사용하기 위해 vector가 등장했다.
	std::vector<int> fibo = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

	return 0;
}