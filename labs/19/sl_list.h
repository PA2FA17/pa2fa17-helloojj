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
  void InsertTail(int num);
  void RemoveHead();
  void RemoveTail();
  int GetHead() const;
  int GetTail() const;
  void Clear();
  unsigned int size() const;
  string ToString() const;

 private:
  SLNode* head_;
  SLNode* tail_;
  unsigned int size_;
};

#endif
