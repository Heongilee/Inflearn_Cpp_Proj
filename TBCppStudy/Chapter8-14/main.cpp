#include <iostream>

using namespace std;

class Fruit {
public:
	enum FruitType //해당 enumerator는 Fruit클래스 안에서만 사용하기 때문에 Block 안에 넣어준다.
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
	//enum 타입의 인자와 enum 클래스 타입의 인자 두개로 인스턴스를 생성한다.
	Fruit f1(Fruit::APPLE, Fruit::Manufacture::UNCLE);	//enumerator의 소속감을 표현해 주기 위해 FriutType::APPLE이라고 쓴다.

	f1.print();

	switch (f1.isApple()) {
		case true:
			cout << "사과 입니다." << endl;
			break;
		case false:
			cout << "사과 아닌데?" << endl;
			break;
	}

	return 0;
}