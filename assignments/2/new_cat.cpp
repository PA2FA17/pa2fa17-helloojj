/*
 * Name        : assignment 2
 * Author      : Justin Johnson
 * Description : knock off cat like program 
 */
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include <stdlib.h>
using std::cout;
using std::cin;
using std::ifstream;
using std::endl;
using std::string;
using std::stringstream;

void run_files(const char* filename);
void check_files(const char* filename);
void user_output();

int main(int argc, char* argv[]) {
  ifstream fin;

// checks if there is a file
// if there is no file it will echo the users input
if(argc == 1) {
  for (int i = 0; i < argc; i++) {
  user_output();
  }
} else {
  // check if file exist
  for (int i = 1; i < argc; i++) {
    check_files(argv[i]);
  }
  // output the file contents
  for (int i = 1; i < argc; ++i) {
    run_files(argv[i]);
  }
}

  return 0;
}

// outputs the user input until they hit the quit button
void user_output() {
  string s;
  while (!cin.eof()) {
    getline(cin, s);
    cout << s << endl;
  }
}
// outputs the files
void run_files(const char* filename) {
  ifstream fin(filename);
  string s;

  while (!fin.eof()) {
    getline(fin, s);
    cout << s << std::endl;
  }
  fin.close();
}
// check if files exist
void check_files(const char *filename) {
  ifstream fin(filename);

    if (!fin.is_open()) {
      std::cerr << "Invalid filename(s)" << endl;
      exit(1);
  }
}
