#ifndef DL_LIST_H_
#define DL_LIST_H_

#include "dl_node.h"

#include <iostream>
#include <string>
#include <sstream>

using std::stringstream;
using std::string;

class DLList {
 public:
 // default constructor
  DLList();
  // destructor
  ~DLList();
  //void DLList::Insert(int num);
  
  // get the size of the list
  unsigned int GetSize() const;
  // function to insert the head
  void PushFront(int num);
    // function to insert the tail
  void PushBack(int num);
  // get the first node
  int GetFront() const;
  // get the last node
  int GetBack() const;
  // delete the first node in list
  void PopFront();
  // delete the last node in list
  void PopBack();
  bool RemoveFirst(int);
  void RemoveAll(int num);
  bool Exists(int num);
  // used by the destructor
  void Clear();
  void InsertMiddle(int num);
  //void Insert(int num);
    
  // out puts
  string ToStringForwards() const;
  string ToStringBackwards() const;

 private:
  DLNode* head_;
  DLNode* tail_;
  unsigned int size_;
};

#endif
