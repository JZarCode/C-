#include <iostream>

using namespace std;

int main(){

  int i=1;

  cout << "\nWhile Loop counting up\n\n";
  while(i<5){
    cout << i << endl;
    i++;
  }

  i--;
  cout << "\nFor Loop counting down\n\n";
  for(; i!=0; i--){
    cout << i << endl;
  }

  //exit status (0 = success)
  //C++ will fill in if not present
  return 0;
}
