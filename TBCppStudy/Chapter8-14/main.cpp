#include <iostream>

using namespace std;

class Fruit {
public:
	enum FruitType //�ش� enumerator�� FruitŬ���� �ȿ����� ����ϱ� ������ Block �ȿ� �־��ش�.
	{
		APPLE, BANANA, CHERRY,
	};

	enum class Manufacture
	{
		UNCLE, STARBUCKS, COFFEEBEAN, 
	};

private:
	FruitType m_type;
	Manufacture m_manuf;

public:
	Fruit(const FruitType &type, const Manufacture &manuf) :m_type(type), m_manuf(manuf) {}

	void setType(const FruitType& type) {
		this->m_type = type;
	}

	FruitType getType() const{
		return this->m_type;
	}

	void setManuf(const Manufacture & manuf) {
		this->m_manuf = manuf;
	}

	Manufacture getManuf() const{
		return this->m_manuf;
	}

	void print() {
		cout << this->m_type << endl;
	}

	bool isApple() const{
		return (this->getType() == Fruit::APPLE) ? true : false;
	}

	bool isBanana() const {
		return (this->getType() == Fruit::BANANA) ? true : false;
	}

	bool isCherry() const {
		return (this->getType() == Fruit::CHERRY) ? true : false;
	}
};
int main() 
{
	//enum Ÿ���� ���ڿ� enum Ŭ���� Ÿ���� ���� �ΰ��� �ν��Ͻ��� �����Ѵ�.
	Fruit f1(Fruit::APPLE, Fruit::Manufacture::UNCLE);	//enumerator�� �ҼӰ��� ǥ���� �ֱ� ���� FriutType::APPLE�̶�� ����.

	f1.print();

	switch (f1.isApple()) {
		case true:
			cout << "��� �Դϴ�." << endl;
			break;
		case false:
			cout << "��� �ƴѵ�?" << endl;
			break;
	}

	return 0;
}