
#include "todo_ui.h"

TodoUI::TodoUI() {
  List_ = new TodoList;
}

TodoUI::~TodoUI() {
  delete List_;
}
// quit function works
void TodoUI::Menu() {
  cout << "----------\n";
  cout << "[0] QuitProgram\n[1] Add Item\n[2] Remove Item\n[3] View Item\n[4]"
       << "view all Item \n[5]Remove All Items\n";
  int input = -1;
  while (input != 6) {
  input = reader.readInt(0, 5);
  switch (input) {
    case 0:
      QuitProgram();
      break;
    case 1:
      CreateItem();
      break;
    case 2:
      RemoveItem();
      break;
    case 3:
      ViewItem();
      break;
    case 4:
    ViewAllItems();
      break;
    case 5:
      RemoveAllItems();
      break;
  }
  cout << "[1] Add Item\n[2] Remove Item\n[3] View Item\n[4] view all Items"
       << "\n[5] Remove All Items\n[6] QuitProgram" << endl;
  }
}

void TodoUI::CreateItem(/*TodoItem *item*/) {
  cout << "Enter description: ";
  string s = reader.readString();
  cout << "\nEnter Priority: ";
  int num  = reader.readInt(0, 5);
  cout << "Enter T or F";
  bool my_var = reader.readBool();
  cout << endl;
  List_->AddItem(new TodoItem(s, num, my_var));
}
// void EditItem() {
//   cout << "Enter location of item to edit";
//   //int location = reader.readInt(0, List_->GetSize());
//   cout << "Enter description: ";
//   string s = reader.readString();
//   cout << "\nEnter Priority: ";
//   int num  = reader.readInt();
//   cout << "Enter T or F";
//   bool my_var = reader.readBool();
//   cout << endl;
//   List_->AddItem(new TodoItem(s, num, my_var));
// }
void TodoUI::RemoveItem() {
  cout << "Enter item Location: ";
  int location = reader.readInt(1, List_->GetSize());
  cout <<  endl;
  List_->DeleteItem(location - 1);
}

void TodoUI::ViewItem() {
  cout << "Enter item Location: ";
  int location = reader.readInt(1, List_->GetSize());
  cout <<  endl;
  cout << *List_->GetItem(location) << endl;
}

void TodoUI::ViewAllItems() {
  // not sure how to bring over overloaded operator
  for (unsigned int i = 0; i < List_->GetSize(); i++) {
    cout << (i  + 1) << ": " << *List_->GetItem(i + 1) << endl;
  }
  cout << endl;
}
void TodoUI::RemoveAllItems() {
  for (unsigned int i = 0; i < List_->GetSize() ; i++) {
    List_->DeleteItem(i);
  }
}
void TodoUI::QuitProgram() {
  exit(0);
}
