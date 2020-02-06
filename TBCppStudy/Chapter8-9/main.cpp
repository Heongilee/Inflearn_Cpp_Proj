#include <iostream>
#include <string>

using namespace std;

class Ch_8_9_Sth {
private:
	int val;
public:
	//※ Call by value 방식으로 클래스를 함수 인자로 전달 했을 때, 값 복사가 일어 남에도 불구하고 생성자가 한번 밖에 호출 안되는 이유...
		//-> Copy Constructor가 숨겨져 있기 때문.
	Ch_8_9_Sth(const Ch_8_9_Sth & st) {
		this->val = st.val;

		cout << "Copy Constructor" << endl;
	}							
	
	Ch_8_9_Sth() {
		cout << "Constructor" << endl;

	}
	void setValue(const int &val) {
		this->val = val;
	}

	//const 키워드는 많이 쓰면 쓸 수록 디버깅에 유리하다. 
	//멤버함수의 상수화(const)는 해당 블록 안에서 멤버 변수의 값을 바꾸지 않는다는 것을 명시해 줍니다.
	const int& getValue() const{	
		return this->val;
	}
	void print() {
		cout << this->val << endl;
	}
 };
class Sth2 {
private :
	string val;
public :
	const string& getValue() const {	//Tip. 보통 const 멤버 함수를 만들면 반환형에도 const를 쓴다.
		cout << "const version" << endl;
		return this->val;
	}
	string& getValue() {
		cout << "non-const version" << endl;
		return this->val;
	}
};
void print(const Ch_8_9_Sth &st) {
	cout << &st << endl;
	//cout << st.getValue() << endl;

	return;
}
int main() 
{
		// 8-9 - (1)
	// 인스턴스를 상수화(const)한다는 것은 멤버 변수를 상수화(const)한다는 것과 같다. 
	//const Sth sth;
	Ch_8_9_Sth sth;

	// 따라서 멤버변수의 값을 바꾸려고 하니 에러를 띄움
	//sth.setValue(3);

	// 의미상으로는 멤버변수의 상수화 이지만, 컴파일러 입장에서는 멤버함수가 const인지 아닌지를 판단함.
	//sth.print();

	//cout << sth.getValue() << endl;

	cout << &sth << endl;

	print(sth);


		// 8-9 - (2)
	Sth2 sth1;
	const Sth2 sth2;

	sth1.getValue() = 10;		//빌드 됨.
	cout << sth1.getValue() << endl;


	// 멤버함수가 overload 되어 작성 했을 때, 
	// 상수화(const)된 객체의 인스턴스는 상수 멤버함수를 찾아서 호출을 한다. 
	//sth2.getValue() = 1004;	//빌드 안됨.
	cout << sth2.getValue() << endl;	

	return 0;
}