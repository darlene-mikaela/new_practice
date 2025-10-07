#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int biggest;
    if (a<b) {
        biggest = (b<c)?c:b;
    } else {
        biggest = (a<c)?c:a;
    }
    cout << biggest << endl;

    // cout << ((a<b)?((b<c)?c:b):((a<c)?c:a)) << endl;
    return 0;
}