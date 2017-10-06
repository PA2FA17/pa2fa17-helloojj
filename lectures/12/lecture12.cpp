#include <iostream>
using namespace std;

void Sneaky(int *temp);

int main() {
    int *p = new int;
    *p = 77;
    cout << "In main, before call *p == " << *p << endl;
    
    Sneaky(p);
    
    cout << "In main, after call *p == " << *p << endl;
    
    return 0;
}

void Sneaky(int *temp) {
    *temp = 99;
    cout << "In Sneaky, *temp =="  << *temp << endl;
}








