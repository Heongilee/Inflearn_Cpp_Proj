#pragma once

#include "Myheader.h"

class Position2D {
private:
	int m_x;
	int m_y;

public:
	Position2D(const int & x, const int & y) :m_x(x), m_y(y) {}

	void moveTo(const Position2D & p) {
		this->moveTo(p.m_x, p.m_y);

		return;
	}

	void moveTo(const int &x, const int &y) {
		this->m_x = x;
		this->m_y = y;
	}

	void set_pos(const Position2D & p) {
		this->set_pos(p.m_x, p.m_y);

		return;
	}

	void set_pos(const int & x, const int & y) {
		this->m_x = x;
		this->m_y = y;

		return;
	}

	Position2D& get_pos() {
		return *this;
	}

	friend std::ostream& operator << (std::ostream& out, const Position2D &p) {
		out << "(" << p.m_x << ", " << p.m_y << ")";

		return out;
	}
};