
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

int main(){
 string word;
//  int letter_count = 0, number_count =0;

 getline(cin,word); 
 word = toupper(word);
 cout << word;


  // for (int i = 0; i < word.length(); i++) {
  //   if (isalpha(word.at(i))) {
  //     letter_count++;
  //   }
  //   else if(isdigit(word.at(i))) {
  //     number_count++;
  //   }
  //   else if (word.at(i) == ' ')
  // }
  // cout << letter_count << endl;
  // cout << number_count;
  
  
  
  
  //word.at(0) = toupper(word.at(0));
  //cout << word.at(0) << endl;
  // for(int i = 0; i < word.length()  ; i+=2 ){
  // for (int j = 1; j < word.length(); j+=2){
      
  //   // //word.at(0) = toupper(word.at(0));
  //   // if(isalpha(word.at(i % 2 == 0))){
  //   //   word.at(i) = toupper(word.at(i));
  //   //   cout << word.at(i);
  // //}
  // word.at(i) = toupper(word.at(i));
  // word.at(j) = tolower(word.at(j));
  // //cout << word.at(j);
    
  // }
  // }
  // cout << word;
  
  // int count = 0;
  
  // if (isalpha(word.at(0))){
  //     count++;
  //   }
  
  // for (int i = 0; i < word.length(); i++){
    
  //   if(word.at(i) == ' '){
  //    count++;
  //   }
  // }
  // cout << count;

  // int array_Size = 1000;
  // int array[array_Size];
  // double sum = 0;
  // double avgerage = 0.0;
  // cin >> array_Size;
  
  // for(int i = 0; i < array_Size; i++){
    
  //   sum = sum + array[i];
  // }
 
  // avgerage = sum / array_Size;
  
  
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