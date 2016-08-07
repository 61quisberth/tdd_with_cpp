#include <iostream>
#include <cassert>
#include <stdexcept>
#include "dollar.hh"

void test_multiplication() {
  Dollar five(5);
  five.times(2);
  assert(five.amount_ == 10);
  std::cout << __FUNCTION__ << ": passed!"
    << std::endl;
}

int main() {
  test_multiplication();
}
