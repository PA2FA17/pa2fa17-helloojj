/*
 * Name        : bst_node.cpp
 * Author      : Justin Johnson
 * Description : .h file for bst_node.cpp
 */

#ifndef BST_NODE_H_
#define BST_NODE_H_

#include <iostream>
#include <string>
#include <sstream>

using std::stringstream;
using std::string;

class BSTNode {
 public:
  // default and overloaded consturctors
  BSTNode();
  BSTNode(int contents);
  ~BSTNode();
  // set the contentes of from the int value
  void SetContents(int num);

  int GetContents() const;
  int& GetContents();

  void SetLeftChild(BSTNode* left_child);
  void SetRightChild(BSTNode* right_child);

  BSTNode* GetLeftChild() const;
  BSTNode*& GetLeftChild();

  BSTNode* GetRightChild() const;
  BSTNode*& GetRightChild();
  
 private:
  BSTNode* left_child_;
  BSTNode* right_child_;
  int contents_;
};

#endif
