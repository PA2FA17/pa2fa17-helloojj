#ifndef DL_NODE_H_
#define DL_NODE_H_

#include <iostream>
#include <string>

using std::endl;
using std::string;


class DLNode {
 public:
  DLNode();
  //DLNode(int contents);
  ~DLNode();
  void SetContents(int content);
  void SetNext(DLNode* next_node);
  void SetPrevious(DLNode* previous_node);
  int GetContents() const;
  DLNode* GetNext() const;
  DLNode* GetPrevious() const;
  
 private:
  DLNode* next_node_;
  DLNode* previous_node_;
  int contents_;
};

#endif
