#include <iostream>

using namespace std;

void count_down(const int &N, int* cnt) {

	*cnt += N;
	
	if(N < 10)
		count_down(N + 1, cnt);

	return;
}
int rfibo(const int &N) {
	if (N == 0) return 0;
	if (N == 1) return 1;
	else return rfibo(N - 1) + rfibo(N - 2);
}
int main() {
	int res1 = 0;
	int res2 = 0;

	int N;

	count_down(1, &res1);

	cout << res1 << endl;

	cin >> N;
	res2 = rfibo(N);

	cout << res2 << endl;

	return 0;
}