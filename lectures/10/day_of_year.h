#ifndef SATHRUM_DAYOFYEAR
#define SATHRUM_DAYOFYEAR

#include <iostream>
using std::cout;
using std::endl;
using std::string;

class DayOfYear {
 public:
  DayOfYear(int month = 1, int day = 1);
  void Output() const;
  void Input(int month, int day);
  // Accessors
  int month() const;
  int day() const;
  // Mutators
  void set_month(int month);
  void set_day(int day);
 private:
  int month_;
  int day_;
};
#endif
