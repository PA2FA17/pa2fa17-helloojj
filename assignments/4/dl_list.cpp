#include "dl_list.h"

DLList::DLList()
  : head_(NULL),
    tail_(NULL),
    size_(0) {
}
DLList::~DLList() {
  Clear();
}
// void DLList::Insert(int num) {
//   if (head_ == NULL || num <= head_->GetContents()) {
//     PushFront(num);
//   } else if (num >= tail_->GetContents()) {
//     PushBack(num);
//   } else {
//     InsertMiddle(num);
//   }
// }
// remove node
bool DLList::RemoveFirst(int num) {
  if (head_ == NULL) {
    std::cerr <<  "Not Found";
    return false;
  } else {
    DLNode* hold = head_;
    DLNode* trail = NULL;
    while (hold != NULL && hold->GetContents() != num) {
      trail = hold;
      hold = hold->GetNext();
    }
    if (hold == NULL) {
      std::cerr <<  "Not Found";
      return false;
    } else if (hold == head_) {
      PopFront();
    } else if (hold == tail_) {
      PopBack();
    } else {
      trail->SetNext(hold->GetNext());
      hold->GetNext()->SetPrevious(trail);
      delete hold;
      size_--;
    }
    return true;
  }
}
// instert head node
void DLList::PushFront(int num) {
  DLNode* temp = new DLNode;
  temp->SetContents(num);
  temp->SetNext(head_);
  if (head_ == NULL) {
    head_ = temp;
    tail_ = head_;
  }
  head_ = temp;
  size_++;
}
// insert tail 
void DLList::PushBack(int num) {
  if (head_ == NULL) {
    PushFront(num);
    tail_ = head_;
  } else {
      DLNode* temp = new DLNode;
      temp->SetContents(num);
      tail_->SetNext(temp);
      temp->SetNext(NULL);
      temp->SetPrevious(tail_);
      tail_ = temp;
      size_++;
  }
}
void DLList::InsertMiddle(int num) {
  DLNode* hold = head_;
  DLNode* trailer = NULL;
  DLNode* temp = new DLNode;
  temp->SetNext(NULL);
  temp->SetContents(num);
  while (hold != NULL) {
    if (hold->GetContents() >= num) {
      break;
    }
    trailer = hold;
    hold = hold->GetNext();
  }
  trailer->SetNext(temp);
  temp->SetNext(hold);
  size_++;
}
// return the head node
int DLList::GetFront() const {
  if (head_ == NULL) {
    std::cerr <<  "List Empty";
    return 0;  
  } else {
      return head_->GetContents();
  }
}
// return the tail node
int DLList::GetBack() const {
  if (tail_ == NULL) {
    std::cerr <<  "List Empty";
    return 0;
  } else {
      return tail_->GetContents();
  }
}
// delete the head node
void DLList::PopFront() {
 if (head_ != NULL) {
    DLNode* temp;
    temp = head_;
    head_ = head_->GetNext();
    delete temp;
    size_--;
  } else {
    std::cerr <<  "List Empty";
  }
  if (head_ == NULL)
    tail_ = head_;
}
// delete the tail node
void DLList::PopBack() {
  if (tail_ != NULL || tail_ == NULL) {
    if (head_ == tail_) {
      PopFront();
    } else {
      DLNode* temp = head_;
      while (temp->GetNext() != tail_) {
        temp = temp->GetNext();
      }
      temp->SetNext(NULL);
      delete tail_;
      tail_ = temp;
      size_--;
    }
  }
}
void DLList::RemoveAll(int num) {
  int hold = 0;
  while (Exists(num)) {
    RemoveFirst(num);
    hold++;
  }
  if (hold <= 0) {
    std::cerr <<  "Not Found";
  }
}
bool DLList::Exists(int num) {
  DLNode* hold = head_;
  while (hold != NULL && hold->GetContents() != num) {
    hold = hold->GetNext();
  }
  if (hold == NULL) {
    return false;
  }
  return true;
}
// to be called by the destructor
void DLList::Clear() {
  while (head_ != NULL) {
    PopFront();
  }
  tail_ = head_;
  size_ = 0;
}
unsigned int DLList::GetSize() const {
    return size_;
}
// output forwords using the head
string DLList::ToStringForwards() const {
  if (head_ == NULL) {
    std::cerr << "List Empty";
    return "";
  }
  stringstream ss;
  DLNode* hold = head_;
  while (hold != NULL) {
    ss << hold->GetContents();
    if (hold->GetNext() != NULL) {
      ss << ", ";
    }
    hold = hold->GetNext();
  }
  return ss.str();
}
// output backwords using the tail
string DLList::ToStringBackwards() const{
  if (head_ == NULL) {
    std::cerr << "List Empty";
    return "";
  }
  std::stringstream ss;
  DLNode* hold = tail_;
  while (hold != NULL) {
    ss << hold->GetContents();
    if (hold->GetPrevious() != NULL) {
      ss << ", ";
    }
    hold = hold->GetPrevious();
  }
  return ss.str();
}
