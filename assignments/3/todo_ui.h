
#ifndef TODO_UI_H_
#define TODO_UI_H_

#include "CinReader.h"
#include "todo_list.h"

using std::cout;
using std::string;
using std::endl;

class TodoUI {
 public:
  TodoUI();
  ~TodoUI();
  void Menu();
  // void CreateItem(/*TodoItem *item*/);
  // void RemoveItem();
  // void ViewItem(unsigned int location);
  // void ViewAllItems();
  // void RemoveAllItems();
  // void QuitProgram();

 private:
  CinReader reader;
  TodoList* List_;

  void CreateItem(/*TodoItem *item*/);
  void RemoveItem();
  void EditItem();
  void ViewItem();
  void ViewAllItems();
  void RemoveAllItems();
  void QuitProgram();
};

#endif
