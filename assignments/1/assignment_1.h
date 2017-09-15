/*
 * Name        : Justin Johnson
 * Author      : Justin Johnson
 * Description : Declare functions from assignment_1.cpp
 * Sources     : FILL IN
 */

#ifndef ASSIGNMENT_1_H
#define ASSIGNMENT_1_H

// Add any includes and using statements Here
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

// Declare Function Prototypes Here (What goes above main)
void CountCharacters(string word, int &letter_count, int &number_count);
string UpAndDown(string word);
int CountWords(string word);
double ComputeMeanAverage(int array[], unsigned int &array_Size);
int FindMinValue(int array[], int size);
int FindMaxValue(int array[], int size);
#endif /* ASSIGNMENT_1_H */
