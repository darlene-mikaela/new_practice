#include <iostream>
using namespace std;

int main() {
    int total, price;
    cin >> total;
    price = total/12*50;
    price += total%12*5;

    cout << price << endl;

    return 0;
}