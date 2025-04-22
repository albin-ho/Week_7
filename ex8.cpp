// Program Purpose:ex8, example code explanation
// Author:
// Last Modified:
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
  int var = 20;
  int *ip;
  ip = &var;
  cout << "Value of var variable: " << var << "\n";

  // Explanation code
  cout << "the address of var is stored in ip:  " << ip << "\n";
  //
  cout << "Value of *ip variable is: " << *ip << " Should be 20" << "\n";

  return 0;
}
