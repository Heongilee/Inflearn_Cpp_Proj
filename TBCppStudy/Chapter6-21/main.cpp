#include <iostream>
#include <vector>	//std::vector �� ����ϱ� ���� ���̺귯��.

using namespace std;

//���� �迭�� ��ü�� �� �ִ� std::vector
int main() {

	//std::vector<Ÿ��> ������ = �ʱ�ȭ;

	std::vector<int> v;

	vector<int> v2{ 1, 2, 3, 4, 5 };	//Uniform-Initialization�� Ư¡ (��ȣ ���� ����)

	cout << v2.size() << endl;

	//���.
		//Vector ���� �� for-each���� ���� ��
	for (auto &i : v2)
		cout << i << " ";

		//������� �ε��� ���� ���.
	cout << "v2.size() : "<< v2.size() << endl;
	cout << "v2.at() : "<< v2.at(0) << endl;
	cout << "v2.front() : "<< v2.front() << endl;
	cout << "v2.back() : "<< v2.back() << endl;


		//Resizing
	v2.resize(10);
	for (auto &i : v2)
		cout << i << " ";
	cout << endl;
	cout << v2.at(9) << endl;


	//Ư¡ 1. Vector�� dealloc �� �ʿ� ���� �˾Ƽ� �޸� ���� �����ش�. (Memory Leak�� ����.)
	/*
	int &*my_arr = new int[5];

	delete[] my_arr;
	*/

	
	return 0;
}