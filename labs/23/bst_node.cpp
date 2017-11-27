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
  : contents_(contents) {
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
    
}
void BSTNode::SetLeftChild(BSTNode* left_child) {
    
}
void BSTNode::SetRightChild(BSTNode* right_child) {
    
}
BSTNode* BSTNode::GetLeftChild() const {
  
}
BSTNode*& BSTNode::GetLeftChild() {
  
}
BSTNode* BSTNode::GetRightChild() const {
  
}
BSTNode*& BSTNode::GetRightChild() {
  
}