/*
  Matheus dos Santos Ribeiro Silva
  BEE 1168 - "LED"
  05/10/2021
*/

#include <iostream>

using namespace std;

int main() {

  int n, cont = 0;

  cin >> n;

  for(int i = 0; i<n; i++) {
    cont = 0;
    string led;
    cin >> led;

    for(int j = 0; j<led.length(); j++) { 
      if(led[j] == '1') {
        cont+= 2;
      } else if(led[j] == '2') {
        cont+= 5;
      } else if(led[j] == '3') {
        cont+= 5;
      } else if(led[j] == '4') {
        cont+= 4;
      } else if(led[j] == '5') {
        cont+= 5;
      } else if(led[j] == '6') {
        cont+= 6;
      } else if(led[j] == '7') {
        cont+= 3;
      } else if(led[j] == '8') {
        cont+= 7;
      } else if(led[j] == '9') {
        cont+= 6;
      } else if(led[j] == '0') {
        cont+= 6;
      }
    }
    cout << cont << " leds" << endl;
  }
  
  return 0;
}
