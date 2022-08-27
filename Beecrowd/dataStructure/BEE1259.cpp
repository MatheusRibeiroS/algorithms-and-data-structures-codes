/*
  Matheus dos Santos Ribeiro Silva
  BEE 1259 - "Even and Odd"
  04/10/2021
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {

  int n, i;

  cin >> n;

  int number[n];

  for(i=0; i<n; i++) {
    cin >> number[i];
  }

  sort(number, number + n);

  for(i = 0; i < n; i++) {
    if(number[i] % 2 == 0) {
      cout << number[i] << endl;
    } 
  }

  for(i = n-1; i >= 0; i--) {
    if(number[i] % 2 != 0) {
      cout << number[i] << endl;
    } 
  }

  return 0;
}