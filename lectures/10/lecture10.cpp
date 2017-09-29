#include <iostream>
#include "day_of_year.h"
#include "day_of_year.cpp"
using std::cout;
using std::endl;

int main() {
  DayOfYear today(9, 21), yesterday, one(9);
  
  cout << "Today is: ";
  today.Output();
  cout << endl;
  
  yesterday.Output();
  one.Output();

  return 0;
}
