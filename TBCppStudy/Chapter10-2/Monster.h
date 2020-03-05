#pragma once

#include "Myheader.h"
#include "Position2D.h"

class Monster {
private:
	std::string m_name;

	//Position2D Ŭ������ MonsterŬ������ ���� Ŭ�����̰�, �� ���踦 ���� ������ �Ѵ�.(Composition)

	//�� �߿� !! : m_location �ν��Ͻ����� Monster Ŭ���������� ��� �����ϴ�.
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