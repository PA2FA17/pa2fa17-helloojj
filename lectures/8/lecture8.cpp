#include <iostream>
using namespace std;

char StringToChar(string value) {
    if (value.size() == 1) {
        return value.at(0);
    } else {
        return '\0';
    }
}

int main(int argc, char *argv[]) {
    char single;
    string str;
    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            if ((single = StringToChar(argv[i])) == '\0') {
                cerr << "Command Line Argument not a character\n";
                return 2;
            }
            str += single;
        }
        cout << str << endl;
    } else {
        cerr << "Not enough arguments!" << endl;
        return 1;
    }
    
    
    return 0;
}