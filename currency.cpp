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


int Currency::returnMoneyState(int currState, int centState) {
  if (currState == 1 && (centState == 1 || centState == 2)) {
    return 1;
  } else if (currState == 1 && centState == 3) {
    return 2;
  } else if (currState == 2 && (centState == 1 || centState == 2)) {
    return 1;
  } else if (currState == 2 && centState == 3) {
    return 3;
  } else {
    return 3;
  }
}

int Currency::subtract(int inWallet, int outWallet) {
  return inWallet - outWallet;
}

int Currency::add(int inWallet, int outWalleT) {
  return inWallet + outWallet;
}

int Currency::checkState(int inWallet, int outWallet) {
  if (inWallet > outWallet) {
    return 1;
  } else if (inWallet == outWallet) {
    return 2;
  } else if (inWallet < outWallet) {
    return 3;
  }
}
