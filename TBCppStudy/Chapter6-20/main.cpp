#include <iostream>
#include <array>		//std::array�� ����ϱ����� ���̺귯��.
#include <algorithm>	//std::sort�� ����ϱ� ���� ���̺귯��.
using namespace std;

void printLeng(const array<int, 5> my_arr) { //�� ���絵 �Ȱ��� �Ͼ.
	cout << "[In Function] : ";
	cout << my_arr.size() << endl;

	return;
}
void print_Elem(const array<int, 5> my_arr) {
	//���۷��� ��ȣ(Ampersand)�� ���̸� �� ���簡 �����Ǳ� ������ �ӵ��� ��������.
	for (auto &elem : my_arr) {	
		cout << elem << " ";
	}
	cout << endl;
	return;
}
void sorting(array<int, 5> *my_arr){
	sort((*my_arr).begin(), (*my_arr).end());

	return;
}
void rsorting(array<int, 5> *my_arr){
	sort((*my_arr).rbegin(), (*my_arr).rend());

	return;
}

int main() {
	//int arr[5] = { 1, 2, 3, 4, 5 };

	// 1. array<Ÿ��, ũ��> ������ = �� �ʱ�ȭ;
	array<int, 5> my_arr = { 1, 2, 3, 4, 5 };

	//my_arr = { 0, 1, 2, 3, 4, 5};	//������ ���� ���� �� �ȴ�.

	//my_arr = { 0, 1, 2 }; //������ �������� �����ϴ�.

	//�� ����� ���� ����� �Ѵ�.
	cout << my_arr[0] << endl;	//std::array�� ũ�� ���� �ʰ��Ǵ��� �ƴ��� Ȯ������ �ʰ� �ٷ� Access �غ���. (�����ս��� ����)
	//cout << my_arr.at(10) << endl;	//std::array�� ũ�Ⱚ�� ���� ������ Access���� Ȯ�� �� ����. ����ó���� ���� Ư¡�� ����.

	//ũ�� ���� �˾� ��.
	cout << my_arr.size() << endl;

	printLeng(my_arr);
	
	my_arr = { 1, 21, 3, 40, 5 };

	print_Elem(my_arr);	//���� ���

	sorting(&my_arr);

	print_Elem(my_arr);	//�������� ���

	rsorting(&my_arr);

	print_Elem(my_arr);	//�������� ���

	return 0;
}