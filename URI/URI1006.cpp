/*
  Matheus dos Santos Ribeiro Silva
  URI 1006 - "Average 2"
  27/09/2021
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  double A,B,C;

  cin >> A >> B >> C;

  cout << fixed << setprecision(1);

  cout << "MEDIA = " << ((A * 2.0) + (B * 3.0) + (C * 5.0)) / 10 << endl;

  return 0;
}