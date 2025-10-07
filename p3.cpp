// p3 購物結帳計算（學生樣板）
#include <iostream>
using namespace std;

int main() {
  // TODO: Problem 3, Please follow the instruction in the lab sheet.
  int price, qty, discount, tax;
  cin >> price >> qty >> discount >> tax;

  int totalPrice = price*qty;
  float discountFactor = 1 - (float(discount)/100); // make decimal
  float taxFactor = 1 + (float(tax)/100); // make decimal
  int total = (totalPrice * discountFactor * taxFactor) + 0.5; // round well
  cout << "Total = " << total << endl;
  return 0;
}