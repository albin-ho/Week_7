// Program Purpose:ex3, Program to transpose matrix A
// Author:
// Last Modified:17/03/2025
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
// declare rows and cols as global constants
// so array can be passed to function
const int rows = 4; //
const int cols = 4;

//// Function returns true/false, using compare int i and j
// bool checkif_symmetric(int in_array[rows][cols], int N_loops) {
//   for (int i = 0; i < N_loops; i++)
//     for (int j = 0; j < N_loops; j++)
//       if (in_array[i][j] != in_array[j][i])
//         return false;
//   return true;
// }

// create a transposed array
void transpose(int in_array[rows][cols], int tr_array[rows][cols],
               int N_loops) {
  for (int i = 0; i < N_loops; i++)
    for (int j = 0; j < N_loops; j++)
      tr_array[i][j] = in_array[j][i];
}

void display_array(int array_in[rows][cols]) {
  cout << "The numbers you typed as follows: " << "\n";
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      // int count = j;
      cout << array_in[i][j] << "\t";
      // count++;
    }
    // cout << double_array[i] << "\t";
    cout << "\n";
    //    cout << "\t";
  }
}

int main() {
  int double_array[rows][cols]; // initialise array
  int total_input = rows * cols;
  cout << "This program demonstrates a transposed array" << "\n";
  cout << "The array has " << rows << " rows and " << cols << " columns"
       << "\n";
  // total_input = rows * cols;
  cout << "Please enter " << total_input << " numbers below:" << "\n";

  // start input for loop
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) { // nested for loop
      int count = j + 1;
      cout << "Enter:" << count << "\t";
      cin >> double_array[i][j];
      count++;
    }
    cout << "\n";
  }
  // call function to display array
  display_array(double_array);

  return 0;
}
