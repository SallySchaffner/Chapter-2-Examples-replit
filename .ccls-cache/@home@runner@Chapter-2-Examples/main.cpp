// Example 3 - Extracting Digits 
//

#include <iostream>
using namespace std;

int main()
{
  int number, digit1, digit2, digit3, digit4;

  cout << "Enter a 4-digit number: ";
  cin >> number;
  digit1 = number % 10;  //Extract the first digit
  number = number / 10;  //Discard the rightmost digit
  digit2 = number % 10;  //Extract the new rightmost digit
  number = number / 10;  //Discard the rightmost digit
  digit3 = number % 10;  //Extract the new rightmost digit
  number = number / 10;  //Discard the rightmost digit
  digit4 = number;       //Last remaining digit

  // Output in reverse order
  cout << digit4 << " " << digit3 << " " << digit2 << " " << digit1 << endl;

  return 0;
}

