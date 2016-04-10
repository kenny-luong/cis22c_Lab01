#include <iostream>
#include "currency.h"
#include "dollars.h"
#include <string>

using namespace std;

int main() {
	Dollars obj1(0, 99);
	Dollars obj2(1, 99);
	Dollars obj3;

	obj3 = obj1+obj2;
	cout << obj3.getCurrNum() << '.' << obj3.getCentNum() << endl;
}
