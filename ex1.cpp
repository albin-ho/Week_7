// Program Purpose:ex1, Program demonstrates 2 dimensional arrays
// Author:
// Last Modified:11/03/2025
//
//**********************************************************************************
// #include <cmath>
// #include <cstdlib>
#include <iostream>
// #include <string>
// #include <vector>
// #include <iomanip>
// #include <ctime>
// #include <fstream>
// #include <iostream>
using namespace std;

int main() {
  int rows = 4; // use row/cols vars for size of array
  int cols = 4;
  int double_array[rows][cols]; // initialise array
  int total_input;
  cout << "This program demonstrates a 2D array" << "\n";
  cout << "The array has " << rows << " rows and " << cols << " columns"
       << "\n";
  total_input = rows * cols;
  cout << "Please enter " << total_input << " numbers below:" << "\n";

  // start input for loop
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) { // nested for loop
      int count = j + 1;
      cout << "Enter:" << count << "\t";
      cin >> double_array[i][j];
      count++;
    }
    // int count2 = 1;
    // cout << "outerloop " << count2 << "\n";
    // count2++;
    //  cout << "outerloop" << i << endl;
    cout << "\n";
  }

  cout << "The numbers you typed as follows: " << "\n";
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      // int count = j;
      cout << double_array[i][j] << "\t";
      // count++;
    }
    // cout << double_array[i] << "\t";
    cout << "\n";
    //    cout << "\t";
  }
  return 0;
}
