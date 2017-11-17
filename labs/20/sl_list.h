#ifndef SL_LIST_H_
#define SL_LIST_H_

#include "sl_node.h"

#include <iostream>
#include <string>
#include <sstream>

using std::stringstream;
using std::string;

class SLList {
 public:
 // default constructor
  SLList();
  // destructor
  ~SLList();
  void Insert(int);
  bool RemoveFirstOccurence(int);
  // get the first node
  int GetHead() const;
  // get the last node
  int GetTail() const;
  // used ny the destructor
  void Clear();
  // get the size of the list
  unsigned int size() const;
  // out put
  string ToString() const;

 private:
  SLNode* head_;
  SLNode* tail_;
  unsigned int size_;
  //
  void InsertHead(int num);
  void InsertTail(int num);
  void InsertMiddle(int num);
  void RemoveHead();
  void RemoveTail();
};

#endif
