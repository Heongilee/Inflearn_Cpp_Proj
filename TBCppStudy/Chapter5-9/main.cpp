#include <iostream>
#include <cstdlib>	//std::rand(), std::srand()
#include <ctime>	//std::time()
#include <random>	//(C++ 11) std::random_device, std::mt19937, std::mt19937_64 라는 사용자 정의 자료형을 제공해준다.

using namespace std;

int getRand(int m, int M)	//Number Twister Algorithm
{
	static const double fraction = 1.0 / (RAND_MAX + 1.0);

	return m + static_cast<int>((M - m + 1) * (std::rand() * fraction));
}

/*
unsigned int PRNG()	//Pseudo Random Number Generator (ft. Overflow)
{
	static unsigned int seed = 5523;
		//시작하는 숫자.

	seed = 8253729 * seed + 2396403;

	return seed % 32768;	//난수 범위가 0~32767
}
*/
int main()
{
	/*					//Pra1. Pseudo Random Function case
	for (int cnt = 1;cnt <= 100;cnt++)
	{
		cout << PRNG() << "\t";

		if (cnt % 5 == 0) cout << endl;
	}
	*/

	/*
	//srand(5523);												//Pra2. stdlib 라이브러리 이용
	srand(static_cast<unsigned int>(std::time(0)));				//Pra3. ctime 라이브러리 이용해서 srand인자 변화 주기.
	for (int cnt = 1;cnt <= 100;cnt++)
	{
		_sleep(150);
		cout << rand()<< "\t";

		if (cnt % 5 == 0) cout << endl;
	}
	*/

	/*									//Pra4. Number Twister Algorithm을 함수로 구현.
	std::srand(5323);

	for (int cnt = 1;cnt <= 100;cnt++)
	{
		cout << getRand(5, 8) << "\t";

		if (cnt % 5 == 0) cout << endl;
	}
	*/
	//Pra5. <random> 라이브러리를 이용
	random_device rd;		//운용할때 NULL인자를 가진 함수처럼 이용. 랜덤한 시드를 반환한다.
	//mt19937 mersenne(rd());			//32비트의 난수를 생성
	mt19937_64 mersenne(rd());			//64비트의 난수를 생성
	uniform_int_distribution<> didi(1, 6);
	uniform_int_distribution<> dice;

	int i = 0;
	while (i++ < 10) {
		cout << dice(mersenne) << "\t";

		if (i % 5 == 0) cout << endl;
	}

	return 0;
}