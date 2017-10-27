/*
 * Name        : todo_list.cpp
 * Author      : Justin Johnson
 * Description : Implementation file for TodoList class
 */
#include "todo_list.h"


TodoList::TodoList() {
  size_ = 0;
  capacity_ = 25;
  List_ = new TodoItem*[capacity_];

  for (unsigned int i = 0; i < capacity_; i++) {
    List_[i] = NULL;
  }
}

TodoList::~TodoList() {
  for (unsigned int i = 0; i < size_; i++) {
    delete List_[i];
    List_[i] = NULL;
  }
  delete[] List_;
}

void TodoList::AddItem(TodoItem *point) {
  if (size_ == capacity_) {
    arrayIncrease();
  }
  List_[size_] = point;
  size_++;
}

void TodoList::DeleteItem(int location) {
  List_[location - 1] = NULL;
  compact(location - 1);
}

TodoItem *TodoList::GetItem(unsigned int location) const {
  if (location > size_) {
    return NULL;
  }
  return List_[location - 1];
}

unsigned int TodoList::GetSize() const {
  return size_;
}

unsigned int TodoList::GetCapacity() {
  return capacity_;
}

void TodoList::Sort() {
  for (unsigned int i = 0; i < size_ - 1; i++) {
    for (unsigned int j = 0; j < size_ - 1 ; j++) {
      if (List_[j]->priority() > List_[j + 1]->priority()) {
        swap(List_[j], List_[j + 1]);
      }
    }
  }
}

string TodoList::ToFile() {
  stringstream ss;
  for (unsigned int i = 0; i < size_; i++) {
    ss << List_[i]->ToFile() << endl;
  }
  return ss.str();
}

ostream& operator <<(ostream &out, const TodoList &todo_list) {
for (unsigned int i = 0; i < todo_list.GetSize(); i++) {
  out << (i  + 1) << *todo_list.GetItem(i + 1) << endl;
}
  return out;
}

void TodoList::arrayIncrease() {
  capacity_ = capacity_ + 10;
  TodoItem **temp;
  temp = new TodoItem*[capacity_];

  for (unsigned int i = 0; i < size_; i++) {
    temp[i] = List_[i];
  }

  delete[] List_;
  List_ = NULL;
  List_ = temp;
}

void TodoList::compact(int location) {
  if (List_[location] == NULL) {
    for (unsigned int i = location; i < size_ - 1; i++) {
      List_[i] = List_[i + 1];
    }
  }
  List_[size_ - 1] = NULL;
  size_--;
  // cout << size_ << endl;
}
