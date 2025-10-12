#include <iostream>
using namespace std;

int main() {
    int first = 0;
    int second = 1;
    cout << first << endl;
    while (second < 100) {
        cout << second << endl;
        int temp = second;
        second += first;
        first = temp;
    }
    return 0;
}