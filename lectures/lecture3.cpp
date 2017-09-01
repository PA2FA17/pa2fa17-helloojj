#include <iostream>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;
using std::boolalpha;
using std::string;
#include <sstream>

int main() {
    // && || !
    cout << boolalpha;
    // cout << (true && true) << endl;
    // cout << (true && false) << endl;
    // cout << (false && true) << endl;
    // cout << (false && false) << endl;
    
 
    // cout << (true || true) << endl;
    // cout << (true || false) << endl;
    // cout << (false || true) << endl;
    // cout << (false || false) << endl;
    
    // cout << (true || true && false) << endl;
    
    // int num;
    // cout << "Please enter a number (1-100): ";
    // cin >> num;
    
//     if(num > 50) {
//         cout << "Large\n";
//     } else if (num > 25){
//         cout << "Medium\n";
//     }
    
//   else { 
//         cout << "small\n";
//   }

    // enum Grades {Grade_A = 9, Grade_B = 8};
    
    // switch (num / 10){
    //     case 10:
    //         cout << "Awesome job!\n";
    //         break;
    //     case Grade_A:
    //         cout <<"A";
    //         break;
    //     case Grade_B:
    //         cout << "B";
    //         break;
    //     default:
    //         cout << "Invalid grade!";
    //         break;
    // }
    // cout << endl;
    
    // int cookies, students;
    // cout <<"How many cookies? " ;
    // cin >> cookies;
    // cout << "how many students?";
    // cin >> students;
    
    // if (students != 0 && cookies / students >=2) {
    //     cout << "You may have 2 cookies!!\n";
    // }
    
    // int i;
    // cout << "How many iterations? ";
    // cin >> i;
    
    // // while (i > 0) {
    // //     cout << i << endl;
    // //     i--;
    // // }
    
    // // do {
    // //     cout << i << endl;
    // //     i--;
    // // } while (i > 0);
    
    // for (/* int o = 0" */; i > 0; i -=2 ) {
    //     cout << i << endl;
    // }
    
    // string s;
    // s = "Hello ";
    // s += "World! ";
    // cout << s << endl;

    // string s1 = "hello world!";
    // if (s >= s1) {
    //     cout << "bigger";
    // } else {
    //     cout << "smaller";
    // }
    // cout << endl;
    
   // cout << s.at(0) << endl;
    //cout << s[4] << endl;
    
    // s.at(0) = 'J';
    // s.at(4) = 'Y';
    // cout << s << endl;
    
    // cout << s.length() << endl;
    // cout << s.size() << endl;
    
    // for (unsigned int i = 0; i < s.size(); i++){
    //     cout << s.at(i) << endl;
    // }
    
    // cout << s.substr(2,5);
    // cout << s.find("llo") << endl;
    // cout << string::npos << endl;
    
    // if (s.find("llo") != string::npos) {
    //  cout << "found" << endl;   
    // }
    
    // cctype: is___(char), to___(char)
    // A:: return integers!!!
    
    // if (isalpha('@') ) {
    // cout << "Its a letter!!!\n ";
    // }
    // isalpha
    // isdigit
    // isalnum
    // ispunct
    // isspace
    // islower
    // isupper
    
    // toupper
    // tolower
    
    // cout << toupper('a') << endl;
    
    // char c = 'a';
    // c = toupper(c);
    // cout << static_cast<char>(toupper('a')) << endl;


    // stringstream sout;
    // sout << 'A' << " " << 65;
    // sout.str();
    
    return 0;
}