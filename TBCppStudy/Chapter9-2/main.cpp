#include <iostream>
#include <fstream>

using namespace std;

class Point {
private:
	double m_x, m_y, m_z;

public:
	Point(double x = 0.0, double y = 0.0, double z = 0.0) : m_x(x), m_y(y), m_z(z) {}

	double get_X() const { return this->m_x; }
	double get_Y() const { return this->m_y; }
	double get_Z() const { return this->m_z; }

	//Member Selection Operator로 접근해야 하는 불편함이 있다.
	void print() {
		// ...
	}

	//std::ostream을 반환하도록 Output Stream Operator를 오버로딩 하면 다음과 같이 쓸 수 있다.
	friend std::ostream& operator << (std::ostream &OUT, const Point & p1) {
		OUT << "(" << p1.m_x << ", " << p1.m_y << ", " << p1.m_z << ")" << endl;

		return OUT;	//리턴을 다음과 같이 해주면 Chaining이 가능하다.
	}

	friend std::istream& operator >> (std::istream &IN, Point &p1) {
		IN >> p1.m_x >> p1.m_y >> p1.m_z;

		return IN;
	}
};
int main() 
{
	//Output file stream...
	ofstream of("out.txt");
	Point p1, p2;

	cin >> p1 >> p2;

	//p1을 출력한다음 operator << 에서 ostream을 반환하기 때문에 Chaining이 가능하다. 
	cout << p1 << " " << p2 << endl;
	of << p1 << " " << p2 << endl;

	of.close();

	return 0;
}