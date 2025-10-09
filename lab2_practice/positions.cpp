#include <iostream>
using namespace std;

int main() {
    int pos = 0; // initialize position to 0
    int k, x1, x2, y1, y2;
    cin >> k;  // 生命值
    cin >> x1 >> x2;
    cin >> y1 >> y2;
    
    while (k > 0) {
        pos = pos+k;
        if (pos%x1 == 0) {
            k -= y1;
        }
        if (pos%x2 == 0) {
            k -= y2;
        }
    }

    cout << pos << endl;

    return 0;
}