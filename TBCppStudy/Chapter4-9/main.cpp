#include <iostream>
#include <vector>

int main() 
{
	using namespace std;

	//typedef double distance_t;
	using distance_t = double;

	double		my_distance;
	distance_t	home2work;	// �� ���α׷������� distance_t�� �� �� double�� ���ڴ�. ��� ����

	std::vector<std::pair<std::string, int > > pairlist1;
	std::vector<std::pair<std::string, int > > pairlist2;
	//������ ���� �������� �ڵ带

	//typedef std::vector<std::pair<std::string, int > > pairlist_t;		/* typedef�� �̿��� ���� ���̱� */
	using pairlist_t = std::vector<std::pair<std::string, int > >;			/* using�� �̿��� ���� ���̱� */

	pairlist_t typedef_pairlist1;
	pairlist_t typedef_pairlist2;
	//������ ���� ������ ǥ���� �� �ִ�.

	return 0;
}