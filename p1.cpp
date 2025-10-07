// Lab1: p1 三數運算與平均（學生樣板）
#include <iostream>
using namespace std;

int main() {
  // TODO: 依 Notion 題目一規格完成輸入/輸出
  // 這是註解，不要理會
  int a, b, c;
  cin >> a >> b >> c;
  cout << a << " + " << b << " + " << c << " = " << a+b+c << endl; // a+b+c
  cout << a << " - " << b << " - " << c << " = " << a-b-c << endl; // a-b-c
  cout << a << " * " << b << " * " << c << " = " << a*b*c << endl; // a*b*c
  cout << a << " / " << b << " / " << c << " = " << a/b/c << endl; // a/b/c
  cout << "Avg = " << (a+b+c)/3 << endl;
  return 0;
}