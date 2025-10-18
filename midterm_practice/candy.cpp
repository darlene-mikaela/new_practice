#include <iostream>
using namespace std;

int main() {
    int c; // candies bought
    float p; // exchange rate
  
    while (cin >> c >> p) {
        int exchange =  (int)(c*p);
        while (exchange > 0) {
            c += exchange;
            exchange = (int)(exchange*p);
        }
        cout << c << endl;
    }
    
    return 0;
}