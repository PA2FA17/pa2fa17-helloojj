#include "sl_list.h"

SLList::SLList()
  : head_(NULL),
    size_(0) {
}
SLList::~SLList() {
  Clear();
}
void SLList::InsertHead(int num) {
  SLNode* temp = new SLNode;
  temp->set_contents(num);
  temp->set_next_node(head_);
  head_ = temp;
  size_++;
}
void SLList::RemoveHead() {
  if (head_ != NULL) {
    SLNode* temp = new SLNode;
    temp = head_;
    head_ = head_->next_node();
    delete temp;
    size_--;
  }
}
void SLList::Clear() {
  while (head_ != NULL) {
    RemoveHead();
  }
}
unsigned int SLList::size() const {
    return size_;
}
string SLList::ToString() const {
  stringstream ss;
  SLNode* hold = head_;
  while (hold != NULL) {
    ss << hold->contents();
    if (hold->next_node() != NULL) {
      ss << ", ";
    }
    hold = hold->next_node();
  }
  return ss.str();
}
