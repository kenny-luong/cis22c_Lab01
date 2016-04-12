#include "dollars.h"

Dollars::Dollars() {
  setCurrName("Dollars");
  setCentName("Cents");
  setCurrNum(0);
  setCentNum(0);
}

Dollars::Dollars(int currNum, int centNum) {
  setCurrName("Dollars");
  setCentName("Cents");
  setCurrNum(currNum);
  setCentNum(centNum);
}

Dollars Dollars::operator+(Dollars d) {
  Dollars obj;
  obj.currNum = add(currNum, d.currNum);
  obj.centNum = add(centNum, d.centNum);
  if (obj.centNum > 99) {
    obj.centNum -= 100;
    obj.currNum += 1;
  }
  return obj;
}

Dollars Dollars::operator-(Dollars d) {
  Dollars obj;
  int query = returnMoneyState(checkState(currNum, d.currNum), checkState(centNum, d.centNum));
  switch(query) {
    case 1: {
      obj.currNum = subtract(currNum, d.currNum);
      obj.centNum = subtract(currNum, d.currNum);
      return obj;
    }
      break;
    case 2: {
      obj.currNum = subtract(currNum, d.currNum) - 1;
      obj.centNum = subtract(centNum, d.centNum) + 100;
      if (obj.currNum < 0) {
        obj.currNum = 0;
      }
      return obj;
    }
      break;
    case 3: {
      std::cout << "You do not have enough money." << std::endl;
    }
      break;
  }
}
