// p4 找零計算（學生樣板）
#include <iostream>
using namespace std;

int main() {
  // TODO: Problem 4, Please follow the instruction in the lab sheet.
  // 50, 10, 5, 1
  int price, paid;
  cin >> price >> paid;

  int change = paid - price;
  int fifty = change/50;
  int ten = (change%50)/10;
  int five = ((change%50)%10)/5;
  int one = ((change%50)%10)%5;

  cout << "Change = " << change << endl
        << "50 = " << fifty << endl
        << "10 = " << ten << endl
        << "5 = " << five << endl
        << "1 = " << one << endl;
  return 0;
}