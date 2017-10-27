
#include <iostream>
#include <cmath>
#include <string>
#include <cctype>
#include <sstream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stringstream;
//using namespace std;
//void CountCharacters(word, &letter_count ,&number_count);
void F( int *point) {
*point = 10;
}

int main () {
int my_var = 5;
int*p = &my_var;
F(p);
cout << *p << endl;
cout << my_var << endl;

  return 0;
}
 
// void CountCharacters(string word, int &letter_count , int &number_count ){
    
//     for (int i = 0; i < word.length(); i++) {
//       if (isalpha(word.at(i))) {
//       letter_count++;
//       }
//       if(isdigit(word.at(i))) {
//       number_count++;
//       }
//     }
//   }