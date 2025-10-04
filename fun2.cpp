#include <iostream>
using namespace std;

int main(){
  int number, digit;
  int reverse = 0;
  cout << "Enter a positive number: ";
  cin >> number;

  do {

    digit = number % 10;
    reverse = (reverse * 10) + digit;
    number /= 10;

  } while(number != 0);

  cout << "The reverse of the number is: " << reverse << '\n';

  if(number == reverse){
    cout << "The number is a palendrome.";
  }
  else {
    cout << "The number is not a palendrome.";
  }
  

  return 0;
}