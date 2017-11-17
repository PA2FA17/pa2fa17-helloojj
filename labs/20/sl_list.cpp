#include "sl_list.h"

SLList::SLList()
  : head_(NULL),
    tail_(NULL),
    size_(0) {
}
SLList::~SLList() {
  Clear();
}
void SLList::Insert(int num) {
  if (head_ == NULL || num <= head_->contents()) {
    InsertHead(num);
  } else if (num >= tail_->contents()) {
    InsertTail(num);
  } else {
    InsertMiddle(num);
  }
}
bool SLList::RemoveFirstOccurence(int num) {
  if (head_ == NULL) {
    return false;
  } else {
    SLNode* it = head_;
    SLNode* trail = NULL;
    while (it != NULL && it->contents() != num) {
      trail = it;
      it = it->next_node();
    }
    if (it == NULL) {
      return false;
    } else if (it == head_) {
      RemoveHead();
    } else if (it == tail_) {
      RemoveTail();
    } else {
      trail->set_next_node(it->next_node());
      delete it;
      size_--;
    }
    return true;
  }
}
void SLList::InsertHead(int num) {
  SLNode* temp = new SLNode;
  temp->set_contents(num);
  temp->set_next_node(head_);
  if (head_ == NULL) {
    head_ = temp;
    tail_ = head_;
  }
  head_ = temp;
  size_++;
}
void SLList::InsertTail(int num) {
  if (head_ == NULL) {
    InsertHead(num);
    tail_ = head_;
  } else {
      SLNode* temp = new SLNode;
      temp->set_contents(num);
      tail_->set_next_node(temp);
      temp->set_next_node(NULL);
      tail_ = temp;
      size_++;
  }
}
void SLList::InsertMiddle(int num) {
  SLNode* hold = head_;
  SLNode* trailer = NULL;
  SLNode* temp = new SLNode;
  temp->set_next_node(NULL);
  temp->set_contents(num);
  while (hold != NULL) {
    if (hold->contents() >= num) {
      break;
    }
    trailer = hold;
    hold = hold->next_node();
  }
  trailer->set_next_node(temp);
  temp->set_next_node(hold);
  size_++;
}
int SLList::GetHead() const {
  if (head_ == NULL) {
    return 0;  
  } else {
      return head_->contents();
  }
}
int SLList::GetTail() const {
  if (tail_ == NULL) {
    return 0;
  } else {
      return tail_->contents();
  }
}
void SLList::RemoveHead() {
 if (head_ != NULL) {
    SLNode* temp;
    temp = head_;
    head_ = head_->next_node();
    delete temp;
    size_--;
  }
  if (head_ == NULL)
    tail_ = head_;
}
void SLList::RemoveTail() {
  if (tail_ != NULL) {
    if (head_ == tail_) {
      RemoveHead();
    } else {
      SLNode* temp = head_;
      while (temp->next_node() != tail_) {
        temp = temp->next_node();
      }
      temp->set_next_node(NULL);
      delete tail_;
      tail_ = temp;
      size_--;
    }
  }
}
void SLList::Clear() {
  while (head_ != NULL) {
    RemoveHead();
  }
  tail_ = head_;
  size_ = 0;
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
