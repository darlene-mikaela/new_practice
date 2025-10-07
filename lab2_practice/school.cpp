#include <iostream>
using namespace std;

int main() {
  int hour, minute;
  cin >> hour >> minute;
  if (hour > 23 or minute > 59) {
    cout << "Invalid time" << endl;
  } else {
    if (hour == 7 and minute >=30) {
      cout << "At School" << endl;
    } else if (hour > 7 and hour < 17) {
        cout << "At School" << endl;
    }
     else { cout << "Off School" << endl; }
  }
  return 0;
}