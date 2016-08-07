#include "dollar.hh"

Dollar::Dollar(int amount) {
  amount_ = amount;
}

void Dollar::times(int multiplier) {
  amount_ *= multiplier;
}
