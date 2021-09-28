/*
  Matheus dos Santos Ribeiro Silva
  URI 1014 - "Consumption"
  27/09/2021
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  int totalDistance;
  float spentFuel;

  cin >> totalDistance >> spentFuel;

  cout << fixed << setprecision(3);

  cout << totalDistance / spentFuel << " km/l" << endl; 

  return 0;
}