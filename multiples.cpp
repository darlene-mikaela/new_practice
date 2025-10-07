#include <iostream>
using namespace std;

int main() {
    int max = 9;
    for (int i = 1; i <= max; i++) {
        for (int j = 1; j <= max; j++) {
            cout << i << "*" << j << "=" << i*j << "\t";
        }
        cout << endl;
    }
    return 0;
}