
#ifndef TODO_LIST_H_
#define TODO_LIST_H_

#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <iomanip>

#include "todo_item.h"

using std::cout;
using std::endl;
using std::string;
using std::stringstream;
using std::swap;

class TodoList {
 public:
  TodoList();
  ~TodoList();
  void AddItem(TodoItem *point);
  void DeleteItem(int location);
  TodoItem *GetItem(unsigned int location) const;
  unsigned int GetSize() const;
  unsigned int GetCapacity();
  void Sort();
  string ToFile();
  friend ostream &operator <<(ostream &out, const TodoList &todo_list);

 private:
  TodoItem** List_;
  unsigned int capacity_;
  unsigned int size_;

  void arrayIncrease();
  void compact(int location);
};


#endif /* TODO_LIST_H_ */
