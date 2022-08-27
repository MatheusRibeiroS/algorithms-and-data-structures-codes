/*
  Matheus dos Santos Ribeiro Silva
  BEE 1009 - "Salary with Bonus"
  27/09/2021
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  string sellerName;
  double salary, totalSale;

  cin >> sellerName >> salary >> totalSale;

  cout << fixed << setprecision(2);

  cout << "TOTAL = R$ " << salary + (totalSale * 0.15) << endl;

  return 0;
}