#include <iostream>
#include "currency.h"
#include "dollars.h"
#include <string>

using namespace std;

int main() {
	Currency *obj1 = new Dollars();
	obj1->setCurrNum(1);
	obj1->setCentNum(69);
	Currency *obj2 = new Dollars();
	obj2->setCurrNum(0);
	obj2->setCentNum(54);
	Currency *obj3 = new Dollars();
	*obj3 = *obj1-*obj2;
	Currency *obj4 = new Dollars();
	*obj4 = *obj1+*obj2;

	cout << "Dollar OK, Cent OK" << endl;
	cout << obj3->getCurrNum() << '.' << obj3->getCentNum() << endl;
	cout << obj4->getCurrNum() << '.' << obj4->getCentNum() << endl;
}
