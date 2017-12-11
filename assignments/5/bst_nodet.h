/*
 * Name        : bst_node.cpp
 * Author      : Justin Johnson
 * Description : .h file for bst_nodeT.cpp
 */

#ifndef BST_NODET_H_
#define BST_NODET_H_

#include <iostream>
#include <string>
#include <sstream>

using std::stringstream;
using std::string;

template <typename T>
class BSTNodeT {
 public:
  // default and overloaded consturctors
  BSTNodeT();
  BSTNodeT(T contents);
  ~BSTNodeT();
  // set the contentes of from the int value
  void SetContents(T num);

  T GetContents() const;
  T& GetContents();

  void SetLeft(BSTNodeT<T>* left_child);
  void SetRight(BSTNodeT<T>* right_child);

  BSTNodeT<T>* GetLeft() const;
  BSTNodeT<T>*& GetLeft();

  BSTNodeT<T>* GetRight() const;
  BSTNodeT<T>*& GetRight();
  
  void IncrementCount();
  void DecrementCount();
  
  T GetCount();

 private:
  BSTNodeT<T>* left_child_;
  BSTNodeT<T>* right_child_;
  T contents_;
  unsigned int count_;
};


/////////////////////////////////////// 
// defintions start here
template<typename T>
BSTNodeT<T>::BSTNodeT()
  : left_child_(NULL),
    right_child_(NULL),
    contents_(T()),
    count_(0) {
}
template<typename T>
BSTNodeT<T>::BSTNodeT(T contents)
    : left_child_(NULL),
      right_child_(NULL),
      contents_(contents),
      count_(0) {
}
template<typename T>
BSTNodeT<T>::~BSTNodeT() {
  left_child_ = NULL;
  right_child_ = NULL;
}
template <typename T>
void BSTNodeT<T>::SetContents(T num) {
  contents_ = num;
}
template <typename T>
T BSTNodeT<T>::GetContents() const {
  return contents_;
}
template <typename T>
T& BSTNodeT<T>::GetContents() {
  return contents_;
}
template <typename T>
void BSTNodeT<T>::SetLeft(BSTNodeT<T>* left_child) {
  left_child_ = left_child;
}
template <typename T>
void BSTNodeT<T>::SetRight(BSTNodeT<T>* right_child) {
  right_child_ = right_child;
}
template <typename T>
BSTNodeT<T>* BSTNodeT<T>::GetLeft() const {
  return left_child_;
}
template <typename T>
BSTNodeT<T>*& BSTNodeT<T>::GetLeft() {
  return left_child_;
}
template <typename T>
BSTNodeT<T>* BSTNodeT<T>::GetRight() const {
  return right_child_;
}
template <typename T>
BSTNodeT<T>*& BSTNodeT<T>::GetRight() {
 return right_child_;
}
template <typename T>
void BSTNodeT<T>::IncrementCount() {
  count_++;
}
template <typename T>
void BSTNodeT<T>::DecrementCount() {
  count_--;
}

template <typename T>
T BSTNodeT<T>::GetCount() {
  return count_;
}

#endif
