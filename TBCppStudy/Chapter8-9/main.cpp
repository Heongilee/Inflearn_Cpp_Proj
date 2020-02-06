#include <iostream>
#include <string>

using namespace std;

class Ch_8_9_Sth {
private:
	int val;
public:
	//�� Call by value ������� Ŭ������ �Լ� ���ڷ� ���� ���� ��, �� ���簡 �Ͼ� ������ �ұ��ϰ� �����ڰ� �ѹ� �ۿ� ȣ�� �ȵǴ� ����...
		//-> Copy Constructor�� ������ �ֱ� ����.
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

	//const Ű����� ���� ���� �� ���� ����뿡 �����ϴ�. 
	//����Լ��� ���ȭ(const)�� �ش� ��� �ȿ��� ��� ������ ���� �ٲ��� �ʴ´ٴ� ���� ����� �ݴϴ�.
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
	const string& getValue() const {	//Tip. ���� const ��� �Լ��� ����� ��ȯ������ const�� ����.
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
	// �ν��Ͻ��� ���ȭ(const)�Ѵٴ� ���� ��� ������ ���ȭ(const)�Ѵٴ� �Ͱ� ����. 
	//const Sth sth;
	Ch_8_9_Sth sth;

	// ���� ��������� ���� �ٲٷ��� �ϴ� ������ ���
	//sth.setValue(3);

	// �ǹ̻����δ� ��������� ���ȭ ������, �����Ϸ� ���忡���� ����Լ��� const���� �ƴ����� �Ǵ���.
	//sth.print();

	//cout << sth.getValue() << endl;

	cout << &sth << endl;

	print(sth);


		// 8-9 - (2)
	Sth2 sth1;
	const Sth2 sth2;

	sth1.getValue() = 10;		//���� ��.
	cout << sth1.getValue() << endl;


	// ����Լ��� overload �Ǿ� �ۼ� ���� ��, 
	// ���ȭ(const)�� ��ü�� �ν��Ͻ��� ��� ����Լ��� ã�Ƽ� ȣ���� �Ѵ�. 
	//sth2.getValue() = 1004;	//���� �ȵ�.
	cout << sth2.getValue() << endl;	

	return 0;
}