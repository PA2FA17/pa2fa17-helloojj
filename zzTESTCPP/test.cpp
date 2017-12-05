#include <iostream>
using namespace std;
int main() {
  unsigned int k,i,x;
  for (i = 0; i <= 10; i++) {
      x = 1;
      for (k = 0; k <= i; k++) {
          cout << x << '\t';
          x = x * (i - k) / (k + 1);
      }
      cout << endl;
  }
  return 0;
}