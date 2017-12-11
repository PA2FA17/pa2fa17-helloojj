
#ifndef BS_TREET_H_
#define BS_TREET_H_


#include "bst_nodet.h"
#include <iostream>
#include <string>
#include <sstream>

using std::stringstream;
using std::string;

template<typename T>
class BSTreeT {
 public:
  BSTreeT();
  ~BSTreeT();
  
  unsigned int Insert(T num);
  int Remove(T num);
  bool Exists(T num);
  T FindMin();
  T FindMax();
  void Clear();
  unsigned int GetSize() const;
  BSTNodeT<T>* Get(T num);
  string ToStringForwards();
  string ToStringBackwards();

 private:
  BSTNodeT<T>* root_;
  unsigned int size_;
  // private member functions
  unsigned int Insert(T num, BSTNodeT<T>*& sub_root);
  void Clear(BSTNodeT<T>*& sub_root);
  string ToStringForwards(BSTNodeT<T>* sub_root);
  string ToStringBackwards(BSTNodeT<T>* sub_root);
  T FindMin(BSTNodeT<T>* sub_root);
  T FindMax(BSTNodeT<T>* sub_root);
  
  int Remove(T num, BSTNodeT<T>*& sub_root);
  BSTNodeT<T>* Get(T num, BSTNodeT<T>*& sub_root);
  bool Exists(T num, BSTNodeT<T>* sub_root);
};


/////////////////////////////////////// 
// defintions start here
template<typename T>
BSTreeT<T>::BSTreeT()
  : root_(NULL),
    size_(0) {
}
template<typename T>
BSTreeT<T>::~BSTreeT() {
  Clear();
}
template <typename T>
unsigned int BSTreeT<T>::Insert(T num) {
  return Insert(num, root_);
}
template <typename T>
int BSTreeT<T>::Remove(T num) {
  if (size_ <= 0) {
    return -1;
  }
  return Remove(num, root_);
}
template <typename T>
T BSTreeT<T>::FindMin() {
  if (root_ == NULL) {
    return 0;
  }
  return FindMin(root_);
}
template <typename T>
T BSTreeT<T>::FindMax() {
  if (root_ == NULL) {
    return 0;
  }
  return FindMax(root_);
}
template <typename T>
void BSTreeT<T>::Clear() {
  Clear(root_);
}
template <typename T>
unsigned int BSTreeT<T>::GetSize() const {
  return size_;
}
template <typename T>
BSTNodeT<T>* BSTreeT<T>::Get(T num) {
  return Get(num, root_);
}
template <typename T>
bool BSTreeT<T>::Exists(T num) {
  return Exists(num, root_);
}
template <typename T>
BSTNodeT<T>* BSTreeT<T>::Get(T num, BSTNodeT<T>*& sub_root) {
  if (sub_root != NULL) {
    if (sub_root->GetContents() == num) {
      return sub_root;
    } else if (sub_root != NULL) {
      return Get(num, sub_root->GetLeft());
      return sub_root;
      return Get(num, sub_root->GetRight());
    }
    return NULL;
  }
}
template <typename T>
string BSTreeT<T>::ToStringForwards() {
  // if (size_ = 0) {
  //   return "";
  // }
  return ToStringForwards(root_);
}
template <typename T>
string BSTreeT<T>::ToStringBackwards() {
  // if (size_ = 0) {
  //   return "";
  // }
  return ToStringBackwards(root_);
}
// private funtions members to be called by the public function
// sub_root is passed by refernce to give same location for root_
template <typename T>
unsigned int BSTreeT<T>::Insert(T num, BSTNodeT<T>*& sub_root) {
  if (sub_root == NULL) {
    BSTNodeT<T>* temp = new BSTNodeT<T>(num);
    temp->IncrementCount();
    sub_root = temp;
    size_++;
    return 0;
  } else if (num < sub_root->GetContents()) {
      return Insert(num, sub_root->GetLeft());
  } else if (num > sub_root->GetContents()) {
      return Insert(num, sub_root->GetRight());
  }
  sub_root->IncrementCount();
  return sub_root->GetCount();
}
template <typename T>
void BSTreeT<T>::Clear(BSTNodeT<T>*& sub_root) {
  if (sub_root != NULL) {
    Clear(sub_root->GetLeft());
    Clear(sub_root->GetRight());
    delete sub_root;
    sub_root = NULL;
    size_--;
  }
}
template <typename T>
string BSTreeT<T>::ToStringForwards(BSTNodeT<T>* sub_root) {
  stringstream ss;
  if (sub_root != NULL) {
    ss << ToStringForwards(sub_root->GetLeft()) << sub_root->GetContents();
    if (sub_root->GetContents() == FindMax()) {
      return ss.str();
    } else {
      ss << ", ";
    }
    ss << ToStringForwards(sub_root->GetRight());
  }
  return ss.str();
}
template <typename T>
string BSTreeT<T>::ToStringBackwards(BSTNodeT<T>* sub_root) {
  stringstream ss;
  if (sub_root != NULL) {
    ss << ToStringBackwards(sub_root->GetRight()) << sub_root->GetContents();
    if (sub_root->GetContents() == FindMin()) {
      return ss.str();
    } else {
      ss << ", ";
    }
    ss << ToStringBackwards(sub_root->GetLeft());
  }
  return ss.str();
}
template <typename T>
T BSTreeT<T>::FindMin(BSTNodeT<T>* sub_root) {
  if (sub_root->GetLeft() != NULL) {
    return FindMin(sub_root->GetLeft());
  }
  return sub_root->GetContents();
}
template <typename T>
T BSTreeT<T>::FindMax(BSTNodeT<T>* sub_root) {
  if (sub_root->GetRight() != NULL) {
    return FindMax(sub_root->GetRight());
  }
  return sub_root->GetContents();
}
template <typename T>
int BSTreeT<T>::Remove(T num, BSTNodeT<T>*& sub_root) {
if (sub_root == NULL) {
  return 0;
} else if (sub_root->GetContents() == num) {
    if (sub_root->GetContents() == num) {
      sub_root->DecrementCount();
      return sub_root->GetCount();
    } else if (sub_root->GetLeft() != NULL && sub_root->GetRight() == NULL) {
        BSTNodeT<T>* temp = sub_root;
        sub_root = sub_root->GetLeft();
        delete temp;
    } else if (sub_root->GetRight() != NULL && sub_root->GetLeft() == NULL) {
        BSTNodeT<T>* temp = sub_root;
        sub_root = sub_root->GetRight();
        delete temp;
    } else {
        sub_root = Get(num, sub_root->GetRight());
        sub_root->GetContents() = num;
        return Remove(num, sub_root->GetRight());
      } 
  }
  else if (sub_root->GetContents() < num) {
      if (sub_root->GetRight() != NULL) {
        return Remove(num, sub_root->GetRight());
      }
    } else if (sub_root->GetContents() > num) {
        if (sub_root->GetLeft() != NULL) {
          return Remove(num, sub_root->GetLeft());
        }
      }
  return 0;
}

template <typename T>
bool BSTreeT<T>::Exists(T num, BSTNodeT<T>* sub_root) {
  if (sub_root != NULL) {
    if(num == sub_root->GetContents())
      return true;
    if(num < sub_root->GetContents())
      return Exists(num, sub_root->GetLeft());
    else
      return Exists(num, sub_root->GetLeft());
      return true;
  }
  else return false; 
}

#endif
