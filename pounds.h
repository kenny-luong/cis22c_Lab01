#include "currency.h"

class Pounds : public Currency {
public:
  Pounds();
  Pounds(int, int);
  Pounds operator+(Pounds);
  Pounds operator-(Pounds);
};
