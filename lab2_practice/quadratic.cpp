#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int determinant = pow(b,2) - 4*a*c;

    if (a) {
        if (determinant < 0) {
            cout << "No real root" << endl;
        } else if (determinant == 0) {
            float solution = -b/(2*a);
            cout << "Two same roots x=" << solution << endl;
        } else {
            float sol1 = (-b + sqrt(determinant))/(2*a);
            float sol2 = (-b - sqrt(determinant))/(2*a);
            cout << "Two different roots x1=" << ((sol1 < sol2) ? sol2 : sol1) // bigger
                              << " , x2=" << ((sol1 < sol2) ? sol1: sol2) << endl; // smaller
        }
    } else {
        cout << "Not a quadratic" << endl;
    }
    return 0;
}