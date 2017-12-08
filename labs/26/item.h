
#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>
#include <sstream>

using std::stringstream;
using std::string;

class Item {
 public:
  Item(string name = "item", unsigned int value = 0);
  virtual ~Item();

  string name();
  unsigned int value();

  void set_name(string name);
  void set_value(unsigned int num);

  string ToString();

 private:
  string name_;
  unsigned int value_;
};

#endif
