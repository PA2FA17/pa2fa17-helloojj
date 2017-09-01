#include <iostream> 
#include <sstream>
// using std::stringstream;
using namespace std;

int main() {
    int age, extracted_age;
    string name;
    stringstream ss;
    
    cout << "What is your age? ";
    cin >> age;
    cin.ignore(1000, '\n');
    
    cout << "Pleade  enter your full name: ";
    getline(cin,name);
    cout << "Hello " << name <<"!" << endl
         << "You are " << age << " years old \n";
    ss << "Hello " << name <<"!" << endl
       << "You are " << age << " years old \n";
       cout << ss.str();
       
       while( !isdigit(ss.peek()) ) {
         ss.ignore(1);
       }
       ss >> extracted_age;
       cout << extracted_age << endl;
    
    
    return 0;
}