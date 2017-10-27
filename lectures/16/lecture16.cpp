#include <iostream>
#include <cassert>
using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::string;

void Divide(int num1,int num2) {
    if (num2 == 0) {
        throw "Error: Divide by 0";
    }
    cout << "The quotient is: " << (num1 / num2) << endl;
}

int main() {
    int dididend, divisor;
    cout << "enter the dididend: ";
    cin >> dididend;
    cout << "Enter the divisor: ";
    cin >> divisor;
    
    //assert(divisor != 0);
    
    try {
    Divide(dididend,divisor);    
    } catch(const string &s) {
        cerr << s << endl;
        return 1;
    }
    
    
    return 0;
}