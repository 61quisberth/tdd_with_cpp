#include <iostream>
#include <cassert>
#include <stdexcept>
#include "dollar.hh"

void test_multiplication() {
  Dollar five(5);
  five.times(2);
  assert(five.amount == 10);
}

int main() {
  test_multiplication();
}
