// Example 2 - Percentage Discount
//

#include <iostream>
using namespace std;

int main()
{
  double regularPrice, percentDiscount, discountAmount, reducedPrice;

  regularPrice = 59.95;
  percentDiscount = 0.2;

  discountAmount = regularPrice * percentDiscount;
  reducedPrice = regularPrice - discountAmount;

  cout << "The discount amount is $" << discountAmount << endl;
  cout << "The discounted price is $" << reducedPrice;

  return 0;
}
