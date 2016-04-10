#define _CRT_SECURE_NO_WARNINGS
#include "currency.h"

Currency::Currency() {

}
Currency::Currency(int theNum, int deNum) {
  currNum = theNum;
  centNum = deNum;
}

void Currency::setCurrName(std::string theName) {
  currName = theName;
}

void Currency::setCentName(std::string theName) {
  centName = theName;
}

void Currency::setCurrNum(int theNum) {
  currNum = theNum;
}

void Currency::setCentNum(int theNum) {
  centNum = theNum;
}

std::string Currency::getCurrName() {
  return currName;
}

std::string Currency::getCentName() {
  return centName;
}

int Currency::getCurrNum() {
  return currNum;
}

int Currency::getCentNum() {
  return centNum;
}

Currency Currency::operator+(Currency c) {
  Currency obj;
  obj.currNum = currNum + c.currNum;
  obj.centNum = centNum + c.centNum;
  if (obj.centNum > 99) {
    obj.centNum -= 100;
    obj.currNum += 1;
  }
  return obj;
}
// TODO Figure out logic behind losing money
Currency Currency::operator-(Currency c) {
  Currency obj;
  obj.currNum = currNum - c.currNum;
  obj.centNum = centNum - c.centNum;
  // Implement logic here
}
