/*
  Matheus dos Santos Ribeiro Silva
  BEE 1011 - "Sphere"
  27/09/2021
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  int radius;
  const double PI = 3.14159;

  cin >> radius;

  cout << fixed << setprecision(3);

  cout << "VOLUME = " << (4.0/3.0) * PI * radius * radius * radius << endl;

  return 0;
}

