#include <iostream>
#include <vector>

int main() 
{
	using namespace std;

	//typedef double distance_t;
	using distance_t = double;

	double		my_distance;
	distance_t	home2work;	// 내 프로그램에서는 distance_t를 쓸 때 double로 쓰겠다. 라고 지정

	std::vector<std::pair<std::string, int > > pairlist1;
	std::vector<std::pair<std::string, int > > pairlist2;
	//다음과 같은 지저분한 코드를

	//typedef std::vector<std::pair<std::string, int > > pairlist_t;		/* typedef를 이용한 가명 붙이기 */
	using pairlist_t = std::vector<std::pair<std::string, int > >;			/* using을 이용한 가명 붙이기 */

	pairlist_t typedef_pairlist1;
	pairlist_t typedef_pairlist2;
	//다음과 같이 간결히 표현할 수 있다.

	return 0;
}