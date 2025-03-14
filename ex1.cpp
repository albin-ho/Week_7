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
  int rows = 4;
  int cols = 4;
  int double_array[rows][cols];

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      int count = j + 1;
      cout << "Inner loop, Enter:" << count << "\t";
      cin >> double_array[i][j];
      count++;
    }
    int count2 = i + 1;
    cout << "outerloop " << count2 << "\n";
    // cout << "\n";
    count2++;
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
