#include <iostream>
using namespace std;

int main() {
    int h1 = 1; int m1 = 1; int h2 = 1; int m2 = 1;
    int time;

    do {
        cin >> h1 >> m1 >> h2 >> m2;
        time = (h2-h1)*60 + (m2-m1);
        if (time < 0) {
            if (h2<h1) {
                time = (24-h1+h2)*60 + (m2-m1);
            } else if (h2==h1) {
                time = 24*60 + (m2-m1);
            }
        } else if (time == 0) {
            break;
        }
        cout << time << endl;
    } while (true);

    return 0;
}