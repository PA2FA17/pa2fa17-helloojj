
#include "item.h"

Item::Item(string name, unsigned int value) : name_(name), value_(value) {
  
}

Item::~Item(){
}
string Item::name() {
  return name_;
}
unsigned int Item::value() {
 return value_; 
}
void Item::set_name(string name) {
  name_ = name;
}
void Item::set_value(unsigned int num) {
  value_ = num;
}
string Item::ToString() {
  std::stringstream ss;
  ss.setf(std::ios::fixed|std::ios::showpoint);
  ss.precision(2);
  ss << name_ << ", $" << value_;
  
  return ss.str();
}
