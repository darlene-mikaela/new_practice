#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    if (year%4==0) {
        if (year%100!=0) { cout << "a leap year" << endl; }
        else if (year%100==0 and year%400==0) { cout << "a leap year" << endl; }
        else { cout << "a normal year" << endl; }
    } else {
        cout << "a normal year" << endl;
    }
    return 0;
}