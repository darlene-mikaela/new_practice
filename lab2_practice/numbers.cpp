#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Type number: ";
    cin >> num;

    // number of digits
    int digits=0;
    if (num==0) {
        digits = 1;
    } else if (num< 0) {
        num = -num;
    }

    for (int i = num; i > 0; i/=10) {
        digits++;
    }

    cout << "Number of digits: " << digits << (digits%2?" odd":" even") << endl;

    // reverse
    int reverse=0;
    for (int j = num; j > 0; j /= 10) {
        reverse = reverse*10 + j%10;
    }
    cout << "Reverse: " << reverse << endl;

    // palindrome
    cout << (reverse==num?"A palindrome":"Not a palindrome") << endl;

    return 0;
}