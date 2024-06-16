// Example 2 - Percentage Discount
//

#include <iostream>
using namespace std;

int main()
{
  double regularPrice, percentDiscount, discountAmount, reducedPrice;

  cout << "Enter the regular price of the item: ";
  cin >> regularPrice;
  cout << "Enter the discount percentage: ";
  cin >> percentDiscount;

  discountAmount = regularPrice * percentDiscount / 100;
  reducedPrice = regularPrice - discountAmount;

  cout << "The discount amount is $" << discountAmount << endl;
  cout << "The discounted price is $" << reducedPrice;

  return 0;
}
