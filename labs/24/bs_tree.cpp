
#include "bs_tree.h"


BSTree::BSTree() 
  : root_(NULL),
    size_(0) {
}
BSTree::~BSTree() {
   //Clear();
}
bool BSTree::Insert(int num) {
  Insert(num, root_);
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
// private funtions members
bool BSTree::Insert(int num, BSTNode*& node) {
  
}
void BSTree::Clear(BSTNode*& node) {
  
}
string BSTree::InOrder(BSTNode* node) {
  stringstream ss;
  
  return ss.str();
}