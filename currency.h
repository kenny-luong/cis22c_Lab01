#ifndef CURRENCY_H
#define CURRENCY_H

#include <iostream>
#include <string>

class Currency {
public:
  std::string currName;
  std::string centName;
  int currNum;
  int centNum;
public:
  Currency();
  Currency(int, int);
  void setCurrName(std::string theName);
  void setCentName(std::string theName);
  void setCurrNum(int theNum);
  void setCentNum(int theNum);
  std::string getCurrName();
  std::string getCentName();
  int getCurrNum();
  int getCentNum();
  Currency operator+(Currency);
  Currency operator-(Currency);
  int returnMoneyState(int, int);
  int subtract(int, int);
  int add(int, int);
  int checkState(int, int);
};

#endif
