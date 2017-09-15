#include <iostream>
using std::cout;
using std::endl;



int main() {
  // Atithmetic operators
  // + - * / % 
  cout << 6 / static_cast<double>(9) << endl;
  cout << 6.0 / 9 << endl;
  cout << 6 / 9 * 1.5 << endl;
  double x = 2, y = 10;
  //x = x + 1; // x+=1  or x++ ++x
  y = x++ * 2;
  cout << "x: " << x << " | y: " << y << endl;
  // Escape sequences?
  // \n \r \t \a \\ \' \"
  
  // constants 
  const int kNumOfStudents = 20;
  
  
  return 0;
}