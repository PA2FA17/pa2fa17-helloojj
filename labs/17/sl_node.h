#ifndef TODO_ITEM_H_
#define TODO_ITEM_H_

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;


class SLNode {
 public:
  SLNode();
  SLNode(int contents);
  ~SLNode();
  void set_contents(int content);
  int contents() const;
  void set_next_node(SLNode* next_node);
  SLNode* next_node() const;

 private:
  SLNode* next_node_;
  int contents_;
};

#endif
