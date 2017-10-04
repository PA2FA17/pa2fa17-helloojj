/*
 * Name        : Justin Johnson
 * Author      : Justin Johnson
 * Description : Create functions for the fist assignemtn of csci21
 * Sources     : FILL IN
 */

#include "assignment_1.h"

// Write Function Definitions Here (What goes below main)

// function 1
void CountCharacters(string word, int &letter_count, int &number_count) {
  letter_count = 0;
  number_count = 0;
  for (unsigned int i = 0; i < word.length(); i++) {
      if (isalpha(word.at(i))) {
       letter_count++;
      } else if (isdigit(word.at(i))) {
      number_count++;
    }
  }
}

// function 2
string UpAndDown(string word) {
  for (unsigned int i = 0; i < word.size(); i+=2) {
      word.at(i) = toupper(word.at(i));
  }
    for (unsigned int i = 1; i < word.size(); i+=2) {
      word.at(i) = tolower(word.at(i));
    }

  return word;
}

// function3
int CountWords(string word) {
  int count = 1;

  // if (isalpha(word.at(0)) ){
  //     count++;
  //   }
  if (word == "") {
    count = 0;
  }
  for (unsigned int i = 0; i < word.length(); i++) {
    if (word.at(i) == ' ') {
      count++;
    }
  }

  return count;
}

// funtion4
double ComputeMeanAverage(int array[], unsigned int array_Size) {
  double sum = 0;
  double Average = 0;

  for (unsigned int i = 0; i < array_Size; i++) {
    sum = sum + array[i];
  }
  Average = sum / array_Size;

  return Average;
}

// funtion 5
int FindMinValue(int array[], int size) {
  double min = array[0];

  for (int i = 0; i < size; i++) {
    if (array[i] < min) {
      min = array[i];
    }
  }
  return min;
}

int FindMaxValue(int array[], int size) {
    double max = array[0];

  for (int i = 0; i < size; i++) {
    if (array[i] > max) {
      max = array[i];
    }
  }
  return max;
}
