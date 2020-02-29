#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
#include <chrono>	//시간을 재주는 라이브러리.

using namespace std;

class Timer {
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1>>;
	
	//시작 시간을 나타내는 멤버변수. 인스턴스가 생성되자마자 시간 측정을 시작한다.
	std::chrono::time_point<clock_t> start_time = clock_t::now();

public:
	void elapsed() //	elapse(일랍스) : v) (시간이) 흐르다.
	{
		//측정을 종료하고
		std::chrono::time_point<clock_t> end_time = clock_t::now();

		//end_time에서 start_time을 뺀 것을 second_t(초 단위)로 타입 캐스팅 하여 출력함.
		cout << std::chrono::duration_cast<second_t>(end_time - start_time).count() << " sec" << endl;
	}
};

int main() 
{
	random_device rand_device;					//랜덤 디바이스
	mt19937 mersenne_engine{ rand_device() };	//Random Number Generator

	vector<int> v(100000);	//vector size : 10

	for (int i = 0; i < v.size(); i++) {
		v[i] = i;
	}

	//std::shuffle? -> random number generator를 이용해서 벡터 v의 순서를 섞어주는 것.
	std::shuffle(v.begin(), v.end(), mersenne_engine);

	//순서가 섞인 것이 나올 것이다.
	cout << "Unsorted Vector || Shuffling Vector : "; 
	/*for (auto &e : v) cout << e << " ";
	cout << endl;*/
	cout << "Sorting Start" << endl;

	//timer start
	Timer timer;

	//sorting
	std::sort(v.begin(), v.end());

	//잰 시간을 출력해줌.
	timer.elapsed();

	cout << "Sorted Vector : ";
	/*for (auto &e : v) cout << e << " ";
	cout << endl;*/
	cout << "Finish" << endl;

	return 0;
}