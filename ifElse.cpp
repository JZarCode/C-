#include <iostream>

using namespace std;

int main(){

  int i;
  cout << "Please enter small positive integer: ";
  cin >> i;
  cout << endl;

  if(i<0){
    cout << "read the input directions next time!" << endl;
  } else if(i==0){
    cout << "i is equal to 0" << endl;
  } else if(i==1){
    cout << "i is equal to 1" << endl;
  } else {
    cout << "i is greater than 1" << endl;
  }

  //not necessary in C++(0= success)
  return 0;
}
