/*
  Matheus dos Santos Ribeiro Silva
  URI 1010 - "Simple Calculate"
  27/09/2021
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  int pieceCode, pieceQuantity, pieceCode2, pieceQuantity2;
  double pieceValue, pieceValue2, result;

  cin >> pieceCode >> pieceQuantity >> pieceValue;

  cin >> pieceCode2 >> pieceQuantity2 >> pieceValue2;

  result = (pieceQuantity * pieceValue) + (pieceQuantity2 * pieceValue2);

  cout << fixed << setprecision(2);

  cout << "VALOR A PAGAR: R$ " << result << endl;

  return 0;
}