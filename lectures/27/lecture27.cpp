#include <vector>     // std::vector
#include <stdexcept>  // std::out_of_range
#include <algorithm>  // std::min_element, std::max_element, std::find
// std::reverse, std::sort
#include <iostream>   // std::cout, std::cerr, std::endl
using std::vector;
using std::min_element;
using std::max_element;
using std::find;
using std::reverse;
using std::sort;
using std::cout;
using std::endl;

void OutputVector(const vector<int> &v) {
  cout << "Size: " << v.size() << "\nContents: ";
  for (unsigned int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  cout << endl << endl;
}

bool SortDesc(int left, int right) {
  return left > right;
}

int main() {
  int my_ints[] = { 32, 71, 12, 45, 26, 80, 53, 33 };
  std::vector<int> v(my_ints, my_ints + 8);
  cout << "The vector: ";
  OutputVector(v);
  
  vector<int>::iterator it;
  
  sort(v.begin(), v.end(), SortDesc);
  OutputVector(v);
  
  return 0;
}