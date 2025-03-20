// Program Purpose:ex4, Program to show square root array
// Author:
// Last Modified:17/03/2025
//
//**********************************************************************************
// #include <cmath>
// #include <cstdlib>
#include <iostream>
// #include <string>
// #include <vector>
#include <iomanip>
// #include <ctime>
// #include <fstream>
// #include <iostream>
using namespace std;

int main() {
  int squared_array[][2] = {1, 1,  2, 4,  3, 9,  4, 16, 5,  25,
                            6, 36, 7, 49, 8, 64, 9, 81, 10, 100};

  cout << "This program uses an array to calculate square roots " << "\n";
  int size = sizeof(squared_array) /
             sizeof(squared_array[0]); // Calculete number of elements in array
  cout << "The size of the array is: " << size << "\n";
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < size; j++) {
      cout << "|" << squared_array[i][j] << "|" << "    ";
    }
    // cout << "x" << "\n";
    cout << "\n";
  }
  //  cout << "the square root of 6: " << squared_array[5][1] << "\n";
  return 0;
}
