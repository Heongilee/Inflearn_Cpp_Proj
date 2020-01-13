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

	for (int number : const_fibo)	//number�� fibo�� �ִ� �迭�� ������ ��ȸ�Ѵ�.
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
	///*			������ �� �ȴ�.

	//0 1 1 2 3 5 8 13 21 34 55 89

	//*/


	//					//Pra3. change array values (Correction)
	//for (auto& i : variable_fibo)	//auto�� �ַ� �д�. reference variable�� �����Ͽ� ���� �ٲٰڴٴ� �ǹ̸� ���δ�.
	//	i *= 10;

	//for (const auto &j : variable_fibo)	//��º��̱� ������ const�� ���� �ٲ��� �ʰڴٴ� �ǹ̸� ���δ�.
	//	cout << j << " ";
	//cout << endl;

	//					//Pra4. 
	//int max = std::numeric_limits<int>::lowest();	//int ���� ���� �� ���� �ּڰ��� ���Խ�Ŵ.

	//for (const auto &number : variable_fibo)
	//	max = std::max(max, number);	//<algorithm> \ std::max(A, B) A���� B���� ���� ū ���� ��ȯ��.

	//cout << max << endl; 

						//Pra5. Vector ���̺귯�� ������ : �����Ҵ� �迭 ��ſ� �ڵ带 �����ϰ� ����ϱ� ���� vector�� �����ߴ�.
	std::vector<int> fibo = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

	return 0;
}