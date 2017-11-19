#include "dl_node.h"


DLNode::DLNode()
    : next_node_(NULL),
      previous_node_(NULL),
      contents_(0) {
}
// DLNode::DLNode(int content)
//     : contents_(content) {
// }
DLNode::~DLNode() {
}
void DLNode::SetContents(int content) {
    contents_ = content;
}
int DLNode::GetContents() const {
    return contents_;
}
void DLNode::SetNext(DLNode* next_node) {
    next_node_ = next_node;
}
void DLNode::SetPrevious(DLNode* previous_node) {
  previous_node_ = previous_node;
}
DLNode* DLNode::GetNext() const {
  return next_node_;
}
DLNode* DLNode::GetPrevious() const {
  return previous_node_;
}
