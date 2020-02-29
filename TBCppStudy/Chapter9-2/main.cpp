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

	//Member Selection Operator�� �����ؾ� �ϴ� �������� �ִ�.
	void print() {
		// ...
	}

	//std::ostream�� ��ȯ�ϵ��� Output Stream Operator�� �����ε� �ϸ� ������ ���� �� �� �ִ�.
	friend std::ostream& operator << (std::ostream &OUT, const Point & p1) {
		OUT << "(" << p1.m_x << ", " << p1.m_y << ", " << p1.m_z << ")" << endl;

		return OUT;	//������ ������ ���� ���ָ� Chaining�� �����ϴ�.
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

	//p1�� ����Ѵ��� operator << ���� ostream�� ��ȯ�ϱ� ������ Chaining�� �����ϴ�. 
	cout << p1 << " " << p2 << endl;
	of << p1 << " " << p2 << endl;

	of.close();

	return 0;
}