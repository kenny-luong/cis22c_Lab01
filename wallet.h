#ifndef WALLET_H
#define WALLET_H

#include <vector>
#include "currency.h"

template <class T>
class Wallet {
private:
    std::vector<Dollar> wallet;
public:
    Wallet() {
        std::vector<Dollar> wallet;
    }
    ~Wallet() {
        std::cout << "I am clearing the wallet" << std::endl;
        wallet.clear();
        std::cout << walletSize() << std::endl;
    }

    void addCurrency(const Dollar& d) {
        int position = isExists(d.getName());
        if (position == -1) {
          wallet.push_back(d);
        } else {
          wallet.at(position) = wallet.at(position) + d;
        }
    }

    int walletSize() {
        return wallet.size();
    }

    int printContent(int index) {
        return wallet.at(index).getWhole();
    }

    int isExists(std::string theName) {
        for (int i = 0; i < walletSize(); i++) {
          if (theName == wallet.at(i).getName()) {
            return i;
          }
        }
        return -1;
    }

    void clearWallet() {
        wallet.clear();
    }
};

#endif
