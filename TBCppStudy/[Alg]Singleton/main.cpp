#include <iostream>
#include "Singleton.h"
using namespace std;

int main() {
	cout << "Singleton TEST" << endl;

	Singleton *ins1, *ins2, *ins3;

	ins1 = Singleton::getInstance();
	ins2 = Singleton::getInstance();
	ins3 = Singleton::getInstance();

	ins1->addValue(10);
	cout << "Total : " << ins1->getTotalValue() << endl;

	ins2->addValue(10);
	cout << "Total : " << ins2->getTotalValue() << endl;

	ins3->addValue(10);
	cout << "Total : " << ins3->getTotalValue() << endl;

	return 0;
}