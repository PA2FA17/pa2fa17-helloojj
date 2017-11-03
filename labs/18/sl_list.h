#ifndef SL_LIST_H_
#define SL_LIST_H_

#include "sl_node.h"

#include <iostream>
#include <string>
#include <sstream>
using std::cout;
using std::cin;
using std::stringstream;
using std::endl;
using std::string;

class SLList {
 public:
  SLList();
  ~SLList();
  void InsertHead(int num);
  void RemoveHead();
  void Clear();
  unsigned int size() const;
  string ToString() const;

 private:
  SLNode* head_;
  unsigned int size_;

};

#endif