#include <iostream>
using namespace std;

int main() {
  int hour;
  cin >> hour;
  hour -= 15;
  cout << ((hour>=0)?hour:(hour+24)) << endl;
  return 0;
}