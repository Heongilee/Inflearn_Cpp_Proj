#include <iostream>
#include <vector>

using namespace std;

void print_Stack(const vector<int> &stack) {
	for (auto & e : stack) {
		cout << e << " ";
	}
	cout << endl;

	return;
}

int main() {
	//			// (1) - vector�� �⺻ �����.
	///*
	//�� new�� delete�� ����.
	//�� �޸𸮿� sizeof(int) * 3 ������ 
	//������ �� ������ Ž���� �Ҵ��ؾ��ϱ� ������ ���� ������.
	//*/
	//int* arr = new int[3]{ 1, 2, 3 };

	////std::vector�� �� ����ϴ� ���? -> ���ο��� ����Ǵ� new�� delete�� ��� �ϸ� ���� ��� �� �� �����ϸ� ��� �Ѵ�.
	//vector<int> v = { 1, 2, 3 };

	//for (auto &elem : v)
	//	cout << elem << " ";
	//cout << endl;

	//			// (2) - resize(), capacity(), reserve()
	///*
	//size : ���� �ִ� capacity�߿��� � �� ����Ѵٴ� ���ӽ�,

	//capacity(���Ľ�Ƽ) : capacity�� ��ŭ �޸𸮸� ��� ����,

	//reserve : �޸��� �뷮�� �̸� Ȯ���� ���ڴٴ� �ǹ�.
	//*/
	//v.resize(2);		// std::vector�� �⺻ size���� �� ���� ������� resizing�� �޸� �ݳ�&�� �Ҵ��� �ƴ�,
	//					// ����� 2�� ����Ѵٰ� ���̴� ���ӽ��� ��������.

	//cout << "[1] : "<< v.size() << " " << v.capacity() << endl;

	//v.reserve(1024);	//������ resizing�Ͽ� Ű�� ������ �̸� reserve ��ɾ�� ������ ��Ƶθ� �ӵ��� �ξ� ������.
	//cout << "[2] : " << v.size() << " " << v.capacity() << endl;

	////cout << v.at(2) << endl;

	//// ��	������ ���� ������ 2�� ������¡�� ���¿��� ������ �ش� �ε��� ���� ���� 
	////		���� ���� �����Ѵٴ� ���� �� �� �ִ�.
	//int* ptr = v.data();
	//cout << ptr[2] << endl;


				// (3) - �������� ����ϴ� ���

	vector<int> stack;

	//push
	stack.push_back(3);
	print_Stack(stack);
	stack.push_back(7);
	print_Stack(stack);
	stack.push_back(5);
	print_Stack(stack);

	//pop
	stack.pop_back();
	print_Stack(stack);
	stack.pop_back();
	print_Stack(stack);
	stack.pop_back();
	print_Stack(stack);

	return 0;
}