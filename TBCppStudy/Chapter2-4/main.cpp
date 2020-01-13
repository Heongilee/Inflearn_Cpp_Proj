#include<iostream>
//#include<cstdint>		//iostream안에 있으므로 iostream을 include했을경우 생략하자

int main() {
	using namespace std;

	int8_t i(65);	//char			1byte
	int16_t j(5);	//short			2byte
	int32_t k(1);	//int			4byte
	int64_t l(3);	//long long		8byte

	cout << i << j << k << l << endl;

	int_fast8_t fi(5);		//signed char
	int_least64_t fl(5);	//long long



}