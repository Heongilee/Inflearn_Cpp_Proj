#pragma once

#include "Myheader.h"
#include "Position2D.h"

class Monster {
private:
	std::string m_name;

	//Position2D 클래스는 Monster클래스의 서브 클래스이고, 이 관계를 구성 관계라고 한다.(Composition)

	//※ 중요 !! : m_location 인스턴스들은 Monster 클래스에서만 사용 가능하다.
	Position2D m_location;

public:
	Monster(const std::string & name, const Position2D & cordinates) :m_name(name), m_location(cordinates) {}

	void moveTo(const Position2D & p) {
		m_location.moveTo(p);
	}

	friend std::ostream& operator <<(std::ostream& out, const Monster& m) {
		out << m.m_name << ": " << m.m_location;

		return out;
	}
};