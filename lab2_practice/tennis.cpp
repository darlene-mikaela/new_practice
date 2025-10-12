#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char outlook, humidity, wind;
    string play;

    cout << "Masukkan outlook (S/O/R) ";
    cin >> outlook;

    cout << "Masukkan humidity (H/N) ";
    cin >> humidity;

    cout << "Masukkan wind (W/S) ";
    cin >> wind;

    if (outlook=='S'||outlook=='s') {
        if (humidity=='H'||humidity=='h') {
            play = "No";
        } else {
            play = "Yes";
        }
    } else if (outlook=='O'||outlook=='o') {
        if (humidity=='H'||humidity=='h') {
            play = "Yes";
        } else {
            if (wind=='W'||wind=='w') {
                play = "Yes";
            } else {
                play == "No";
            }
        }
    } else {
        if (humidity=='H'||humidity=='h') {
            if (wind=='W'||wind=='h') {
                play = "Yes";
            } else {
                play = "No";
            }
        } else {
            if (wind=='W'||wind=='w') {
                play = "Yes";
            } else {
                play = "No";
            }
        }
    }

    cout << "Play tenis: " << play << endl;

    return 0;
}