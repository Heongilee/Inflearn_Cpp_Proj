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
	int* arr = nullptr;		//Vector 사용하면 돼.
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

	~A() {	//소멸자 용도 1 : 클래스 내부에서 만든 동적할당 메모리를 Dealloc 할때 유용. (사실, 그냥 벡터 써도 됨)
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

	※ Stack 자료구조이기 때문.
	*/
	//Simple s1{ 0 };
	//Simple s2{ 1 };


	//				// (2) -
	//Simple* s3 = new Simple{ 0 };
	//Simple s4{ 1 };	//메인 블럭을 벗어 나면 소멸자 호출.

	//delete s3;	//어떤 코드에 의해 소멸자를 프로그래머가 직접 호출하는 스타일의 코딩은 좋지 못하다.(권장하지 않음)


					// (3) -
	while (true) {
		A* my_arr = new A(1000);
		
		delete my_arr;

		//※ Memory Leak 이 발생하는지 확인하는 방법 : Diagnostic Tools(진단 도구 : Ctrl + Alt + F2)를 보자.
	}

	return 0;
}