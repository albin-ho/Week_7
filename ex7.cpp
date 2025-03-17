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
  int *mypointer;
  int my_array[] = {1, 2, 3, 4, 5};
  int size = sizeof(my_array) / sizeof(my_array[0]);

  cout << "The size of the array is: " << size << "\n";
  return 0;
}
