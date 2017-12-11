#include <iostream>
using namespace std;
// int main() {
//   unsigned int k,i,x;
//   for (i = 0; i <= 10; i++) {
//       x = 1;
//       for (k = 0; k <= i; k++) {
//           cout << x << '\t';
//           x = x * (i - k) / (k + 1);
//       }
//       cout << endl;
//   }
//   return 0;
// }

if (sub_root == NULL) {
  return 0;
} else if (sub_root->GetContents() == num) {
    if (sub_root->GetContents() == num) {
      sub_root->DecrementCount();
      return sub_root->GetCount();
    }
  } else if (sub_root->GetLeft() != NULL && sub_root->GetRight() == NULL) {
      BSTNodeT<T>* temp = sub_root;
      sub_root = sub_root->GetLeft();
      delete temp;
  } else if (sub_root->GetRight() != NULL && sub_root->GetLeft() == NULL) {
      BSTNodeT<T>* temp = sub_root;
      sub_root = sub_root->GetRight();
      delete temp;
  } else {
      sub_root = Get(num, sub_root-GetRight());
      sub_root->GetContents() = num;
      return Remove(num, sub_root->GetRight());
  } else if (sub_root->GetContents() < num) {
      if (sub_root->GetRight() != NULL) {
        return Remove(num, sub_root->GetRight());
      }
    } else if (sub_root->GetContents() > num) {
        if (sub_root->GetLeft() != NULL) {
          return Remove(num, sub_root->GetLeft());
        }
      }
      return 0;
      
  