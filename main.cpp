#include <iostream>
#include "currency.h"
#include "dollars.h"
#include <string>

using namespace std;

int main() {
	// Dollar OK Cent OK
	Dollars obj1(1, 69);
	Dollars obj2(0, 54);
	Dollars obj3;
	obj3 = obj1-obj2;

	// Dollar OK, Cent No
	Dollars obj4(0, 54);
	Dollars obj5(0, 58);
	Dollars obj6;
	obj6 = obj4 - obj5;
	/*
	// Dollar No, Cent Ok
	Dollars obj7(2, 58);
	Dollars obj8(3, 55);
	Dollars obj9;
	obj9 = obj7 - obj8;
	// Dollar No, Cent No
	Dollars objx(0, 56);
	Dollars objy(1, 58);
	Dollars objz;
	objz = objx - objy;

	*/
	cout << "Dollar OK, Cent OK" << endl;
	cout << obj3.getCurrNum() << '.' << obj3.getCentNum() << endl;
	cout << "Dollar OK, Cent No" << endl;
	cout << obj6.getCurrNum() << '.' << obj6.getCentNum() << endl;
	/*
	cout << "Dollar No, Cent Ok" << endl;
	cout << obj9.getCurrNum() << '.' << obj9.getCentNum() << endl;
	cout << "Dollar No, Cent No" << endl;
	cout << objz.getCurrNum() << '.' << objz.getCentNum() << endl;
	*/

}
