#ifndef WALLET_H
#define WALLET_H

#include <vector>
#include "currency.h"

template <class T>
class Wallet {
private:
  int walletSize;
  bool isEmpty;
public:
  Wallet();
  ~Wallet();
  void addCurrency(const Currency&);
  void isExists();
  void emptyWallet();
}

#endif
