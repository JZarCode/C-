#include <iostream>

using namespace std;

int main(){

  int i;
  cout << "Please enter small positive integer: ";
  cin >> i;
  cout << endl;

  if(i<0){
    cout << "read input directions next time!" << endl;
    return 0;
  }

  switch(i){
  case 0:
    cout << "i is equal to 0" << endl;
    break;
  case 1:
    cout << "i is equal to 1" << endl;
    break;
  default:
    cout << "i is greater than 1" << endl;
    break;
  }

  //not necessary in C++ (0=success exit status)
  return 0;
}
