/*
 * Name        : bs_tree.cpp
 * Author      : Justin Johnson
 * Description : .cpp for bs_tree.h
 */

#include "bs_tree.h"


BSTree::BSTree()
  : root_(NULL),
    size_(0) {
}
BSTree::~BSTree() {
  Clear();
}
bool BSTree::Insert(int num) {
  return Insert(num, root_);
}
void BSTree::Clear() {
  Clear(root_);
}
unsigned int BSTree::GetSize() {
  return size_;
}
string BSTree::InOrder() {
  return InOrder(root_);
}
// private funtions members to be called by the public function
// sub_root is passed by refernce to give same location for root_
bool BSTree::Insert(int num, BSTNode*& sub_root) {
  if (sub_root == NULL) {
    BSTNode* temp = new BSTNode(num);
    sub_root = temp;
    size_++;
    return true;
  } else if (num < sub_root->GetContents()) {
      return Insert(num, sub_root->GetLeftChild());
  } else if (num > sub_root->GetContents()) {
      return Insert(num, sub_root->GetRightChild());
  }
  return false;
}
void BSTree::Clear(BSTNode*& sub_root) {
  if (sub_root != NULL) {
    Clear(sub_root->GetLeftChild());
    Clear(sub_root->GetRightChild());
    delete sub_root;
    sub_root = NULL;
    size_--;
  }
}
string BSTree::InOrder(BSTNode* sub_root) {
  stringstream ss;
  if (sub_root != NULL) {
    ss << InOrder(sub_root->GetLeftChild()) << sub_root->GetContents() << " "
       << InOrder(sub_root->GetRightChild());
  }
  return ss.str();
}
