// Program Purpose:Program to check if a input array is a magic square
// Author:
// Last Modified:20/03/2025
//
//**********************************************************************************
// #include <cmath>
// #include <cstdlib>
#include <iostream>
// #include <string>
#include <vector>
// #include <iomanip>
// #include <ctime>
// #include <fstream>
// #include <iostream>
using namespace std;

int main() {
  // Using following formula for magic sum algorithm
  // MagicSum=N(N2+1)/2
  // Use vector instead of arrays
  //
  int n = 3;
  cout << "This program prints out a magic square for ODD numbers" << "\n";
  cout << "Type a ODD number for the amount of rows/cols" << "\n";
  cin >> n;
  vector<vector<int>> magicsqaure(n, vector<int>(n, -1));
  int x = (n / 2), y = n - 1;
  for (int i = 1; i <= n * n; i++) {
    magicsqaure[x][y] = i;

    if (i % n == 0) { // move along the matrix
      y--;
    } else {
      x--;
      y++;
    }
    x += n; // x value +n
    x %= n; // x value Modulo n
    y += n; // y value +n
    y %= n; // y value Modulo n
  }
  // print magic square
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << magicsqaure[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}
