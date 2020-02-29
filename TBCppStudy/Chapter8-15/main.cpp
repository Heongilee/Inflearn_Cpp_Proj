#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
#include <chrono>	//�ð��� ���ִ� ���̺귯��.

using namespace std;

class Timer {
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1>>;
	
	//���� �ð��� ��Ÿ���� �������. �ν��Ͻ��� �������ڸ��� �ð� ������ �����Ѵ�.
	std::chrono::time_point<clock_t> start_time = clock_t::now();

public:
	void elapsed() //	elapse(�϶���) : v) (�ð���) �帣��.
	{
		//������ �����ϰ�
		std::chrono::time_point<clock_t> end_time = clock_t::now();

		//end_time���� start_time�� �� ���� second_t(�� ����)�� Ÿ�� ĳ���� �Ͽ� �����.
		cout << std::chrono::duration_cast<second_t>(end_time - start_time).count() << " sec" << endl;
	}
};

int main() 
{
	random_device rand_device;					//���� ����̽�
	mt19937 mersenne_engine{ rand_device() };	//Random Number Generator

	vector<int> v(100000);	//vector size : 10

	for (int i = 0; i < v.size(); i++) {
		v[i] = i;
	}

	//std::shuffle? -> random number generator�� �̿��ؼ� ���� v�� ������ �����ִ� ��.
	std::shuffle(v.begin(), v.end(), mersenne_engine);

	//������ ���� ���� ���� ���̴�.
	cout << "Unsorted Vector || Shuffling Vector : "; 
	/*for (auto &e : v) cout << e << " ";
	cout << endl;*/
	cout << "Sorting Start" << endl;

	//timer start
	Timer timer;

	//sorting
	std::sort(v.begin(), v.end());

	//�� �ð��� �������.
	timer.elapsed();

	cout << "Sorted Vector : ";
	/*for (auto &e : v) cout << e << " ";
	cout << endl;*/
	cout << "Finish" << endl;

	return 0;
}