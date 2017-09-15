#include <iostream>
#include <limits>
#include <bitset>
using namespace std;


// void Output(ostream &out, string message);

int main() {
    // Output(cout, "FooBar\n");
    // Output(cerr, "BarFoo\n");
    
    int int_to_get = 0;
    cout << "Enter an intger: ";
    cin >> int_to_get;
    
    // cout << "Current value: " << cin.rdstate() << endl;
    // bitset<3> state(cin.rdstate());
    // cout << "Binary: " << 
    // state << endl; 
    
    while(!(cin >> int_to_get)) {
      cout << "Please try again!" << endl;
      cin.clear();
      cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
    }
    
    cout << "You entered: " << int_to_get << endl;
    
  return 0;
}

// void Output(ostream &out, string message) {
//   out << message;
// }