#include <iostream>

using namespace std;

//// (1), (2) -
//class Simple {
//private:
//	int id;
//public:
//	Simple(const int &id) : id(id){	//Constructor
//		cout << "Constructor " << this->id << endl;
//	}
//
//	~Simple() {
//		cout << "Destructor " << this->id << endl;
//	}
//
//};

//(3)
class A {
private:
	int* arr = nullptr;		//Vector ����ϸ� ��.
	int leng = 0;

public:
	A(const int &leng) {
		this->leng = leng;
		this->arr = new int[leng];

		cout << "Constructor || ARR SIZE() : " << this->leng << endl;
	}

	int size() {
		return this->leng;
	}

	~A() {	//�Ҹ��� �뵵 1 : Ŭ���� ���ο��� ���� �����Ҵ� �޸𸮸� Dealloc �Ҷ� ����. (���, �׳� ���� �ᵵ ��)
		if(this->arr != nullptr)
			delete[] this->arr;
	}
};
int main() 
{
					// (1) -
	/*
	Constructor 0
	Constructor 1
	Destructor 1
	Destructor 0

	�� Stack �ڷᱸ���̱� ����.
	*/
	//Simple s1{ 0 };
	//Simple s2{ 1 };


	//				// (2) -
	//Simple* s3 = new Simple{ 0 };
	//Simple s4{ 1 };	//���� ���� ���� ���� �Ҹ��� ȣ��.

	//delete s3;	//� �ڵ忡 ���� �Ҹ��ڸ� ���α׷��Ӱ� ���� ȣ���ϴ� ��Ÿ���� �ڵ��� ���� ���ϴ�.(�������� ����)


					// (3) -
	while (true) {
		A* my_arr = new A(1000);
		
		delete my_arr;

		//�� Memory Leak �� �߻��ϴ��� Ȯ���ϴ� ��� : Diagnostic Tools(���� ���� : Ctrl + Alt + F2)�� ����.
	}

	return 0;
}