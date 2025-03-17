// Program Purpose:ex7, Program pointters and arrays
// Author:
// Last Modified:17/03/2024
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
  int my_array[] = {1, 2, 3, 4, 5};
  int size = sizeof(my_array) / sizeof(my_array[0]);
  // initialise pointer to my_array, start
  int *mypointer = my_array;

  //
  //
  ///
  //
  cout << "This program uses a pointer to access an array" << "\n";
  //
  cout << "The size of the array is: " << size << "\n";
  for (int i = 0; i < size; i++) {
    cout << "Array value at " << i << ": " << *(mypointer + i) << "\n";
  }

  return 0;
}
