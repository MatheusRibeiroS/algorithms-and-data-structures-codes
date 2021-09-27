/*
  Matheus dos Santos Ribeiro Silva
  URI 1005 - "Average 1"
  27/09/2021
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  double A, B;

  cin >> A >> B;

  cout << fixed << setprecision(5);

  cout << "MEDIA = " << ((A * 3.5) + (B * 7.5)) / 11 << endl;

  return 0;
}