#include <iostream>
using namespace std;

int main() {
    // a=1 => b+c, a=2 => b-c, a=3 => b*c, a=4 => b/c
    int total;
    cin >> total;

    for (int i = 0; i < total; i++) {
        int a,b;
        long c;
        cin >> a >> b >> c;
        
        switch (a) {
            case 1:
                cout << b+c << endl;
                break;
            case 2:
                cout << b-c << endl;
                break;
            case 3:
                cout << b*c << endl;
                break;
            case 4:
                cout << b/c << endl;
                break;
        }
    }
    return 0;
}