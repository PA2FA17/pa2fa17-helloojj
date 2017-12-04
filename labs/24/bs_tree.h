
#ifndef BS_TREE_H_
#define BS_TREE_H_


#include "bst_node.h"
#include <iostream>
#include <string>
#include <sstream>
using std::stringstream;
using std::string;


class BSTree {
 public:
  BSTree();
  ~BSTree();
  bool Insert(int num);
  void Clear();
  unsigned int GetSize();
  string InOrder();

 private:
  BSTNode* root_;
  unsigned int size_;

  bool Insert(int num, BSTNode*& sub_root);
  void Clear(BSTNode*& sub_root);
  string InOrder(BSTNode* sub_root);
};
#endif