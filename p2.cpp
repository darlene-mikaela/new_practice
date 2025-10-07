// p2 時間換算（學生樣板）
#include <iostream>
using namespace std;

int main() {
  // TODO: Problem 2, Please follow the instruction in the lab sheet.
  int time;
  cin >> time;
  int hours = time/3600; // 1 hour = 3600 s
  int minutes = (time%3600)/60; // 1 minute = 60 s
  int seconds = (time%3600)%60; // the remaining

  cout << hours << ":" << minutes << ":" << seconds << endl;
  return 0;
}