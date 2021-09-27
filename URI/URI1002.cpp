/*
  Matheus dos Santos Ribeiro Silva
  URI 1002 - "Area of a Circle"
  27/09/2021
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  double radius;
  const double PI = 3.14159;

  cin >> radius;

  cout << fixed << setprecision(4);
  cout << "A=" << PI*(radius*radius) << endl;

  return 0;
}