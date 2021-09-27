/*
  Matheus dos Santos Ribeiro Silva
  URI 1008 - "Salary"
  27/09/2021
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  int employeeNumber, employeeHours;
  double hourValue;

  cin >> employeeNumber >> employeeHours >> hourValue;

  cout << fixed << setprecision(2);

  cout << "NUMBER = " << employeeNumber << endl;

  cout << "SALARY = U$ " << employeeHours * hourValue << endl;

  return 0;
}