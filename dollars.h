#ifndef DOLLARS_H
#define DOLLARS_H

#include "currency.h"


class Dollars : public Currency {
public:
  Dollars();
  Dollars(int, int);
  Dollars operator+(Dollars);
  Dollars operator-(const Currency&);
};

#endif
