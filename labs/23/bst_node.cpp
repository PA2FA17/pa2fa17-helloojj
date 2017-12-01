/*
 * Name        : bst_node.cpp
 * Author      : Justin Johnson
 * Description : .cpp file for bst_node.h
*/

#include "bst_node.h"


BSTNode::BSTNode()
  : left_child_(NULL),
    right_child_(NULL),
    contents_(0) {
}
BSTNode::BSTNode(int contents)
    : left_child_(NULL),
      right_child_(NULL),
      contents_(contents) {
}
BSTNode::~BSTNode() {
  left_child_ = NULL;
  right_child_ = NULL;
}
void BSTNode::SetContents(int num) {
  contents_ = num;
}
int BSTNode::GetContents() const {
  return contents_;
}
int& BSTNode::GetContents() {
  return contents_;
}
void BSTNode::SetLeftChild(BSTNode* left_child) {
  left_child_ = left_child;
}
void BSTNode::SetRightChild(BSTNode* right_child) {
  right_child_ = right_child;
}
BSTNode* BSTNode::GetLeftChild() const {
  return left_child_;
}
BSTNode*& BSTNode::GetLeftChild() {
  return left_child_;
}
BSTNode* BSTNode::GetRightChild() const {
  return right_child_;
}
BSTNode*& BSTNode::GetRightChild() {
  return right_child_;
}
