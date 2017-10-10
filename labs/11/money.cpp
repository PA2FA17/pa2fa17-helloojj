#include "money.h"

// This function definition provided as an example
const Money operator +(const Money& amount1, const Money& amount2) {
  // Get all the cents of object 1
  int all_cents1 = amount1.cents_ + amount1.dollars_ * 100;
  // Get all the cents of object 2
  int all_cents2 = amount2.cents_ + amount2.dollars_ * 100;
  // Add all the cents together
  int sum_all_cents = all_cents1 + all_cents2;
  // Handle the fact that money can be negative
  int abs_all_cents = abs(sum_all_cents);
  int final_dollars = abs_all_cents / 100;
  int final_cents = abs_all_cents % 100;
  // If the result of the operation was negative, negate final dollars and cents
  if (sum_all_cents < 0) {
    final_dollars = -final_dollars;
    final_cents = -final_cents;
  }
  return Money(final_dollars, final_cents);
}

// CLASS FUNCTION DEFINITIONS GO HERE
const Money operator -(const Money& amount1, const Money& amount2) {
  // Get all the cents of object 1
  int all_cents1 = amount1.cents_ + amount1.dollars_ * 100;
  // Get all the cents of object 2
  int all_cents2 = amount2.cents_ + amount2.dollars_ * 100;
  // subtract all the cents together
  int sub_all_cents = all_cents1 - all_cents2;

  int final_dollars = sub_all_cents / 100;
  int final_cents = sub_all_cents % 100;

  return Money(final_dollars, final_cents);
}
bool operator ==(const Money &amount1, const Money &amount2) {
  bool hold = false;
    // Get all the cents of object 1
  int all_cents1 = amount1.cents_ + amount1.dollars_ * 100;
  // Get all the cents of object 2
  int all_cents2 = amount2.cents_ + amount2.dollars_ * 100;

  if (all_cents1 == all_cents2) {
    hold = true;
  }
  return hold;
}

const Money operator -(const Money &amount) {
    // Get all the cents of object 1
  int all_cents1 = amount.cents_ + amount.dollars_ * 100;
  // subtract
  int gather_cents =all_cents1;

  int final_dollars = gather_cents / 100;
  int final_cents = gather_cents % 100;

  if (gather_cents > 0 || gather_cents < 0) {
    final_dollars = -final_dollars;
    final_cents = -final_cents;
  }
  return Money(final_dollars, final_cents);
}
ostream& operator <<(ostream &out, const Money &amount) {
  out << setfill('0') << setw(1);
  out << "$" << amount.dollars_ << "." << setw(2) << amount.cents_;
  return out;
}
